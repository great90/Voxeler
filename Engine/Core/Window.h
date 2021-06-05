#include "../Core.hpp"

struct Window {
    GLFWwindow *window;
    Window(std::string name, int SIZE1, int SIZE2);
};