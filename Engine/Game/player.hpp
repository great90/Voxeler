#pragma once //

#include "../Core.hpp"

namespace Voxeler{
    struct Player{
        const char nickname;
        ECS::EntityID Entity;
        PlayerID ID;
    };

    class PlayerManager{

    };
}