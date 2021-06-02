#include "Window.h"

Window::Window(std::string title) {
    if (!glfwInit())
        return;
    window = glfwCreateWindow(default_window_size[0], default_window_size[1], (title).c_str(), NULL, NULL);
    if (!window) glfwTerminate();
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return;
}