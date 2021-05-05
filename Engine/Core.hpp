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

// GL stuff

#include <GLFW/glfw3.h>

#define ECS_ON
#define VERSION "0.1"

#define WINDOW_NAME "Voxeler"

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

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
        void Exit();
        void Pause();
        bool IsGameRunning;
        int Gamemode;
};

namespace Voxeler {

	class Engine {

	public:
		~Engine();
		Engine(const Engine&) = delete;
		Engine& operator=(const Engine&) = delete;

		static Engine& Ref() {
			static Engine reference;
			return reference;
		}

		void Initialize();
		void Render();
        void Update();

	private:
		Engine();

	private:
		GLFWwindow* window;
	};

	static Engine& Core = Engine::Ref();
}


// ECS stuff

#include "ECS/ECS.h"

// Network stuff

#include "Network/Network.h"

// Game stuff

#include "Game/Game.h"

// Timer stuff

#include "Core/Timer.h"
