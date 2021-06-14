#include "Core.hpp"

namespace Voxeler{
    
    uint Engine::Initialize() { 
        MainWindow = new Window(WINDOW_NAME, SCREEN_WIDTH, SCREEN_HEIGHT);
        GameCore.Initialize(MainWindow);
        return VOX_NULL;
    }

    func Engine::Render(){}

    func Engine::Update(){ ECS::Manager.Update(); }

    uint Engine::Exit() {
        std::exit(-1); 
        return VOX_NULL;
    }
    
    func Engine::Pause() {
        std::cin.get();
    }

};
