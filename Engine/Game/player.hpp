#pragma once

#ifndef VOX_PLAYER_HPP
#define VOX_PLAYER_HPP

#include "../Core.hpp"

#include "../Network/Server.h"

namespace Voxeler{
    class Player{
        public:
            ~Player();
            Player(std::string nickname, int ID);
        private:
            Player();
    };
}

#endif