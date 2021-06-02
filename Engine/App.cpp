#include "Core.hpp"

using namespace Voxeler;

int main(){
	Window* window = new Window(WINDOW_NAME);
    Core.Initialize();

    while(IsGameRunning){
        Timer.Tick();
        Core.Update();
        Core.Render();
    }
}