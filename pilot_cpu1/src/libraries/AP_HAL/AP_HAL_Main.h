#pragma once

#include "HAL.h"

#define AP_MAIN __EXPORT ArduPilot_main

#define AP_HAL_MAIN_CALLBACKS(CALLBACKS) extern "C" { \
    int AP_MAIN(int argc, char* argv[]); \
    int AP_MAIN(int argc, char* argv[]) { \
        hal.run(argc, argv, CALLBACKS); \
        return 0; \
    } \
    }
