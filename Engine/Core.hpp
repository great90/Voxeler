#pragma once

// Basic Includes
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>

// GL stuff

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <SFML/Graphics.hpp>

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>

// General stuff

#define ECS_ON
#define VERSION "0.1"

#define WINDOW_NAME "Voxeler"

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

// platform stuff

#if defined(_WIN32)
#define VOX_WINDOWS
#define VOX_OS "Windows"
#elif defined(__linux__)
#define VOX_LINUX
#define VOX_OS "Linux"
#elif defined(__APPLE__)
#define VOX_APPLE
#define VOX_OS "OSX"
#else
#error Not Supported Platform!
#endif

#ifdef VOX_WINDOWS
#include <windows.h>
#include <winsock2.h>
#endif

#ifdef VOX_LINUX
#include <bits/stdc++.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#endif

#ifdef VOX_APPLE
#error "This Platform is not supported yet!"
#endif

namespace Voxeler{
	using uint = uint32_t;
    using uchar = unsigned char;
    typedef void(*func)();
}

namespace Voxeler{
    void Exit();
    void Pause();
}

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
		
		inline const vbool Run() const { return IsGameRunning; }

	private:
		Engine();
	private:
		bool IsGameRunning;
	};

	static Engine& Core = Engine::Ref();
}

// ECS stuff
#include "ECS/ECS.h"

// Network stuff
#include "Network/Network.h"

// Game stuff
#include "Game/game.hpp"
#include "Errors/Errors.h"
#include "Renderer/Renderer.h"
#include "Core/Window.h"
#include "Core/Timer.h"
#include "Core/Math.h"
