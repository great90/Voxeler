#pragma once //

#include "../Core.hpp"

#include "../Network/Server.h"

namespace Voxeler{
    struct Player{
        const char nickname;
        ECS::EntityID Entity;
        PlayerID ID;
    };

    class PlayersManager{
        public:
            
        private:
            Player* player;
    };
}