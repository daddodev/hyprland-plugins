#pragma once

#include <hyprland/src/plugins/PluginAPI.hpp>
#include <hyprland/src/render/Shader.hpp>

class CTrail;

inline HANDLE PHANDLE = nullptr;

struct SGlobalState {
    CShader          trailShader;
    wl_event_source* tick = nullptr;
    std::vector<WP<CTrail>> trails;
};

inline UP<SGlobalState> g_pGlobalState;
