#include "Core.hpp"

namespace Voxeler{
    
    void Engine::Initialize() {}

    void Engine::Render(){}

    void Engine::Update(){ ECS::Manager.Update(); }

    void Exit() {}
    
    void Pause() {std::cin.get();}

};
