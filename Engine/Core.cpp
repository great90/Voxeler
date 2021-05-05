#include "Core.hpp"

namespace Voxeler{
    
    void Engine::Initialize() {
        IsGameRunning = true;
    }

    void Engine::Render(){

    }

    void Engine::Update(){
        ECS::Manager.Update();
    }
    
    void Engine::Window(){

    GLFWwindow* window;
    if (!glfwInit())
        return -1;
    window = glfwCreateWindow(640, 480, WINDOW_NAME, NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
    }

    void Exit() {
        IsGameRunning = false;
    }
    
    void Pause() {
        std::cin.get();
    }
};