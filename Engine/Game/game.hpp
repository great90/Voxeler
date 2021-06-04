#pragma once

#ifndef VOX_GAME_HPP
#define VOX_GAME_HPP

#include "../Core.hpp"

namespace Voxeler{
    typedef int(PlayerID)(int);

    class Game{
        public:
            int Initialize();
        private:
            int InitializeSystems();
            int InitializeComponents();
    };

}

#endif