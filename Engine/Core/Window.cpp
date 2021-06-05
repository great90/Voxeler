#include "Window.h"

Window::Window(std::string name, int SIZE1, int SIZE2) {
    if (!glfwInit())
        return;
    window = glfwCreateWindow(SIZE1, SIZE2, name.c_str(), NULL, NULL);
    if (!window) glfwTerminate();
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return;
}