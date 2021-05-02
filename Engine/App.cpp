#include "Core.hpp"

using namespace Voxeler;

int main(){
    Core.Initialize();

    while(IsGameRunning){
        Timer.Tick();
        Core.Update();
        Core.Render();
    }
}