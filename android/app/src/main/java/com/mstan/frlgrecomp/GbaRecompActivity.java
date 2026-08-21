package com.mstan.frlgrecomp;

import android.os.Bundle;
import android.speech.tts.TextToSpeech;
import java.util.Locale;

import org.libsdl.app.SDLActivity;

public class GbaRecompActivity extends SDLActivity {

    private TextToSpeech tts;
    private volatile boolean ttsReady = false;

    @Override
    protected String[] getLibraries() {
        return new String[] { "SDL2", getString(R.string.native_lib) };
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        // The engine calls speakText from the game thread as soon as a message
        // box opens, which can be before the engine finishes initialising, so
        // readiness is a flag rather than an assumption.
        tts = new TextToSpeech(this, new TextToSpeech.OnInitListener() {
            @Override
            public void onInit(int status) {
                if (status == TextToSpeech.SUCCESS) {
                    tts.setLanguage(Locale.US);
                    tts.setSpeechRate(0.85f);   // a little slower, for a small listener
                    ttsReady = true;
                }
            }
        });
    }

    @Override
    protected void onDestroy() {
        if (tts != null) {
            tts.stop();
            tts.shutdown();
            tts = null;
        }
        super.onDestroy();
    }

    /**
     * Called from native code before speaking: 0 neutral, 1 male, 2 female.
     * Pitch rather than separate voices, so it works on any device without
     * shipping voice data.
     */
    public void setVoiceKind(int kind) {
        if (!ttsReady || tts == null) return;
        tts.setPitch(kind == 2 ? 1.35f : kind == 1 ? 0.85f : 1.0f);
    }

    /** Called from native code. QUEUE_FLUSH so a new box interrupts the old. */
    public void speakText(String text) {
        if (!ttsReady || tts == null || text == null || text.isEmpty()) return;
        tts.speak(text, TextToSpeech.QUEUE_FLUSH, null, "gbarecomp");
    }

    /** Called from native code when speech should stop. */
    public void stopSpeaking() {
        if (ttsReady && tts != null) tts.stop();
    }
}
