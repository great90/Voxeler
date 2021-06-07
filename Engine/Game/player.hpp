#pragma once

#ifndef VOX_PLAYER_HPP
#define VOX_PLAYER_HPP

#include "../Core.hpp"

#include "../Network/Server.h"

namespace Voxeler{
    class Player{
        public:
            ~Player();
            Player(std::string NickName , int ID);

            std::string Nickname;
            vint id;
        private:
            Player();
        private:
            func SpawnPlayer(int ID, std::string nickname);
    };
}

#endif