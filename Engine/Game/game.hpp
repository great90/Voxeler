#pragma once

#ifndef VOX_GAME_HPP
#define VOX_GAME_HPP

#include "../Core.hpp"

namespace Voxeler{
    typedef int(PlayerID)(int);
    class Game{
        public:
            ~Game();
            Game(const Game&) = delete;
            Game& operator=(const Game&) = delete;

            static Game& Ref() {
                static Game reference;
                return reference;
            }

            func Initialize(Window* window);
        private:
            Game();
        private:
            func InitializeSystems();
            func InitializeComponents();
    };
    static Game& GameCore = Game::Ref();

}

#endif