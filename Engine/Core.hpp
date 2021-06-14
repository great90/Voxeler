#pragma once

#ifndef VOX_CORE_HPP
#define VOX_CORE_HPP

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

// Defines

#define VOX_NULL 0
#define VOX_SUCCES 0
#define VOX_ERR -1
#define VOX_TRUE true
#define VOX_FALSE false
#define VOX_TERMS 7

using namespace VoxelerNetWork;

// Types

namespace Voxeler
{
	using uint = uint32_t;
	using uchar = unsigned char;
    using vuint32 = unsigned int;
    using vuint = vuint32;
    using vint = int;
    using vfloat = float;
    using vufloat = double;
    using vlong = long;
    using vshort = short;
    using vchar = char;
    using vstring = char*;
    using vbool = bool;
    using Matrix4 = glm::mat4;
    using Vector3f = glm::fvec3;
    using Vector3 = glm::vec3;
    using Vector2 = glm::vec2;
	typedef void(*func)();
}

// Main Engine class

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

		uint Initialize();
		func Render();
        func Update();

		uint Exit();
		func Pause();
		
		inline const vbool Run() const { return IsGameRunning; }
		inline Window* GetWindow() { return MainWindow; }

	private:
		Engine();
	private:
	 	Window* MainWindow;
		bool IsGameRunning;
	};

	static Engine& Core = Engine::Ref();
}

// Includes:

#include "Core/ECS/ECS.h"

#include "Network/Network.h"

#include "Game/game.hpp"
#include "Renderer/Renderer.h"
#include "Core/Window.h"
#include "Core/Timer.h"
#include "Core/Math.h"

#endif