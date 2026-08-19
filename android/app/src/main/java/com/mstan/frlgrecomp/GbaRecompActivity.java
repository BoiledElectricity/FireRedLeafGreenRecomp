package com.mstan.frlgrecomp;

import org.libsdl.app.SDLActivity;

public class GbaRecompActivity extends SDLActivity {
    @Override
    protected String[] getLibraries() {
        return new String[] { "SDL2", getString(R.string.native_lib) };
    }
}
