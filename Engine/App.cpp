#include "Core.hpp"
#include "Game/player.hpp"

using namespace Voxeler;

int main(){
    Core.Initialize();

    while(Core.Run()){
        Timer.Tick();
        Core.Update();
        Core.Render();
    }

    return VOX_TRUE;
}