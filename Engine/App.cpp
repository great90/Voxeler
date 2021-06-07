#include "Core.hpp"
#include "Game/player.hpp"

using namespace Voxeler;

int main(){
	Window* window = new Window(WINDOW_NAME, SCREEN_WIDTH, SCREEN_HEIGHT);
    Core.Initialize();

    while(Core.Run()){
        Timer.Tick();
        Core.Update();
        Core.Render();
    }
}