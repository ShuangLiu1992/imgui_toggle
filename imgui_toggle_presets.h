#pragma once

#include "imgui_toggle.h"

// ImGuiTogglePresets: A few canned configurations for various presets OOTB.
namespace ImGuiTogglePresets
{
    // The default, unmodified style.
    ImGuiToggleConfig DefaultStyle();

    // A style similar to default, but with rectangular knob and frame.
    ImGuiToggleConfig RectangleStyle();

    // A style that emulates what a toggle on iOS looks like.
    ImGuiToggleConfig iOSStyle(float size_scale = 1.0f, bool light_mode = false);

    // A style that emulates what a Material Design toggle looks like.
    ImGuiToggleConfig MaterialStyle(float size_scale = 1.0f);

}
