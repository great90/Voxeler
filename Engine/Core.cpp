#include "Core.hpp"

namespace Voxeler{
    
    void Engine::Initialize() {
        IsGameRunning = true;
    }

    void Engine::Render(){

    }

    void Engine::Update(){
        ECS::Manager.Update();
    }

    void Exit() {
        IsGameRunning = false;
    }
    
    void Pause() {
        std::cin.get();
    }

};