#pragma once

#include "../Core.hpp"

namespace VoxelerNetWork{
    typedef struct ClientNode {
        int data;
        struct ClientNode* prev;
        struct ClientNode* link;
        char ip[16];
        char name[31];
    } ClientList;

    ClientList *newNode(int sockfd, char* ip) {
        ClientList *np = (ClientList *)malloc( sizeof(ClientList) );
        np->data = sockfd;
        np->prev = NULL;
        np->link = NULL;
        strncpy(np->ip, ip, 16);
        strncpy(np->name, "NULL", 5);
        return np;
    }

    class Server{
        public:
            void SendToAllClients(char buffer[]);
            void ClientHandler(void* client);
        private:
            int server_sockfd = 0;
            int client_sockfd = 0;
    };

}