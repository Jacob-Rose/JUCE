#pragma once

// Tracy integration bridge for JUCE modules.
//
// Include this from any JUCE module source file with:
//   #include "../../juce_TracyBridge.h"
// (two levels up from any module subdirectory to reach modules/)
//
// The path to Tracy.hpp below is relative to this file's location (modules/).
// If the project layout changes, update only this file.

#ifdef TRACY_ENABLE
 #include "../../../Source/ThirdParty/tracy/public/tracy/Tracy.hpp"
 #define JUCE_TRACY_ZONE(name)        ZoneScopedN(name)
 #define JUCE_TRACY_ZONE_C(name, col) ZoneScopedNC(name, col)
 #define JUCE_TRACY_FRAME_MARK()      FrameMark
 #define JUCE_TRACY_TIMER_ZONE(name)  ZoneScopedN(name)
#else
 #define JUCE_TRACY_ZONE(name)
 #define JUCE_TRACY_ZONE_C(name, col)
 #define JUCE_TRACY_FRAME_MARK()
 #define JUCE_TRACY_TIMER_ZONE(name)
#endif
