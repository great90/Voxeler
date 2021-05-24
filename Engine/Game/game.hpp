#pragma once

#include "../Core.hpp"

namespace Voxeler{
typedef int(PlayerID)(int);
    class Game{
        public:
            void Initialize();
        private:
            void InitializeSystems();
            void InitializeComponents();
    };

}