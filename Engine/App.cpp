#include "Core.hpp"

using namespace Voxeler;

int main(){
    Initialize();

    while(IsGameRunning){
        Timer.Tick();
        Update();
        Render();
    }
}