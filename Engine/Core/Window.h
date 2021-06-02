#include "../Core.hpp"

struct Window {
    GLFWwindow *window;
    int default_window_size[2] = {1280, 720};
    Window(std::string title);

};