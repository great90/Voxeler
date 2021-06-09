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

            inline const int GetPlayerID() const { return id; };
            inline const std::string GetPlayerNickName() const { return Nickname; };

        private:
            Player();
        private:
            std::string Nickname;
            Client client;
            int id;
        // Actions
            func SpawnPlayer(int ID, std::string nickname);
    };
}

#endif