#ifndef SimpleServer_hpp
#define SimpleServer_hpp

#include <stdio.h>
#include <unistd.h> // for read()
#include <string.h>

#include "../serverlib-networking.hpp"

namespace HDE {
    class SimpleServer {
        private:
            ListeningSocket * socket;
            virtual void accepter() = 0; // Accepts a new connection
            virtual void handler() = 0; // Handles a new connection
            virtual void responder() = 0; // Sends a response to a client

        public:
            SimpleServer(int domain, int service, int protocol, int port, u_long interface, int bklg);
            virtual void launch() = 0; // Launches the server

            // Getters
            virtual ListeningSocket * get_socket();
    };
}

#endif /* SimpleServer_hpp */