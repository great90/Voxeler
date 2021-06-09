#include "Core.hpp"

namespace Voxeler{
    
    void Engine::Initialize() { 
        MainWindow = new Window(WINDOW_NAME, SCREEN_WIDTH, SCREEN_HEIGHT);
        GameCore.Initialize(MainWindow);
    }

    void Engine::Render(){}

    void Engine::Update(){ ECS::Manager.Update(); }

    void Exit() {}
    
    void Pause() {std::cin.get();}

};
