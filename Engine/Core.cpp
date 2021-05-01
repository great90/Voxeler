#include "Core.hpp"

namespace Voxeler{
    void Intitalize() {
        IsGameRunning = true;
    }
    
    void Exit() {

    }
    
    void Pause() {
        std::cin.get();
    }
    
    void Debugbreak() {
        std::cerr << "Debug Break Invoked!" << "\n";
        Pause();
        Exit();
    }

};