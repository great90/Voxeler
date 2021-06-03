#include "Core.hpp"

using namespace Voxeler;

int main(){
	Window* window = new Window();
    Core.Initialize();

    while(IsGameRunning){
        Timer.Tick();
        Core.Update();
        Core.Render();
    }
}