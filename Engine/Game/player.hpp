#pragma once

#ifndef VOX_PLAYER_HPP
#define VOX_PLAYER_HPP

#include "../Core.hpp"

#include "../Network/Server.h"

namespace Voxeler{
    struct Player{
        const char nickname;
        ECS::EntityID Entity;
        PlayerID ID;
    };
}

#endif