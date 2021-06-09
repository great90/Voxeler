#pragma once

#include "../Core.hpp"

namespace Voxeler{
    class Keyboard{
        public:
            Keyboard();
            bool GetKeyDown(Window window, int key);
    };
}