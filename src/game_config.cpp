#include "game_config.h"

namespace fire_red {

std::string_view default_region() {
    // The build can override this with -DFIRERED_DEFAULT_REGION=...
#ifdef FIRERED_DEFAULT_REGION
    return FIRERED_DEFAULT_REGION;
#else
    return "usa";
#endif
}

}  // namespace fire_red
