#include "Core.hpp"

namespace Voxeler{
    void Intitalize() {
        IsGameRunning = true;
    }
    
    void Exit() {
        IsGameRunning = false;
    }
    
    void Pause() {
        std::cin.get();
    }
    void Update(){
        ECS::Manager.Update();
    }
};