#pragma once

#include "../Core.hpp"

namespace VoxelerNetWork{
        class Server{
        public:
            void SendToAllClients(char buffer[]);
            void ClientHandler(void* client);
        private:
            int server_sockfd = 0;
            int client_sockfd = 0;
    };

}