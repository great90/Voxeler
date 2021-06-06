
cmake_minimum_required(VERSION 3.12)
project(Voxeler)

set(PLATFORM "Linux")
set(CONF "Debug")

add_subdirectory(thirdparty/glad)
add_subdirectory(thirdparty/glfw)
add_subdirectory(thirdparty/glm)

SET(PROGRAM_SRCS
Engine/App.cpp
Engine/Core.hpp
Engine/Core.cpp
Engine/Core/Math.h
Engine/Core/Timer.cpp
Engine/Core/Timer.h
Engine/Core/Window.h
Engine/Core/Window.cpp
Engine/Errors/Errors.h
Engine/Game/game.hpp
Engine/Game/game.cpp
Engine/Game/player.cpp
Engine/Game/player.hpp
Engine/Inputs/Keyboard.cpp
Engine/Inputs/KeyBoard.hpp
Engine/Renderer/Renderer.cpp
Engine/Renderer/Renderer.h
Engine/Renderer/Shader.h
Engine/Renderer/Shader.cpp
Engine/Renderer/Vertex.h
Engine/Renderer/VertexArray.h
Engine/ECS/ECS.h
Engine/ECS/Base/BaseComponent.h
Engine/ECS/Base/BaseSystem.h
Engine/ECS/Base/CompList.h
Engine/ECS/Base/ComponentFactory.h
Engine/ECS/Base/Entity.h
Engine/ECS/Base/EntityManager.h
Engine/ECS/Base/Types.h
Engine/Comp/Camera.h
Engine/Comp/Transform.h
)

target_link_libraries(Voxeler -lglad)
target_link_libraries(Voxeler -lglfw3)
target_link_libraries(Voxeler -lopengl32)