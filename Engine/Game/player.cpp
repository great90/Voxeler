#include "player.hpp"

namespace Voxeler{
    Player::Player(std::string NickName, int ID){
        Nickname = NickName;
        id = ID;
        SpawnPlayer(ID, NickName);
    }
}