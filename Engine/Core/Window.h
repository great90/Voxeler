#include "../Core.hpp"

struct Window {
    GLFWwindow *window;
    Window();
    void Update();
    void Destroy();
};
