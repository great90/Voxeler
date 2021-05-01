#pragma once

// BASIC
#include <set>
#include <map>
#include <array>
#include <tuple>
#include <queue>
#include <vector>
#include <string>
#include <bitset>
#include <stdio.h>
#include <memory>
#include <cassert>
#include <sstream>
#include <fstream>
#include <iostream>
#include <typeinfo>
#include <algorithm>
#include <functional>
#include <filesystem>
#include <unordered_map>

#define ECS_ON


// platform stuff

#if defined(_WIN32)
#define VOX_WINDOWS
#elif defined(__linux__)
#define VOX_LINUX
#elif defined(__APPLE__)
#define VOX_APPLE
#else
#error Not Supported Platform!
#endif

#ifdef VOX_WINDOWS
    #include <windows.h>
#endif

#ifdef VOX_LINUX
    #include <bits/stdc++.h>
#endif

#ifdef VOX_APPLE

#endif

namespace Voxeler{
        void Initialize();
        void Exit();
        void Pause();
        void Debugbreak();
        void Update();
		void Render();
        bool IsGameRunning;
};

// ECS stuff

#include "ECS/ECS.h"

// Network stuff

#include "Network/Network.h"

// Game stuff

#include "Game/Game.h"

// Timer stuff

#include "Core/Timer.h"