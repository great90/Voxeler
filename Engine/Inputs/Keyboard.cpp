#include "KeyBoard.hpp"

namespace Voxeler {
    Keyboard::Keyboard() { }

    bool Keyboard::GetKeyDown(Window window, int key) {
        if(glfwGetKey(window.window, key) == GLFW_PRESS) {
            return true;
        } else {
            return false;
        }
    }
}