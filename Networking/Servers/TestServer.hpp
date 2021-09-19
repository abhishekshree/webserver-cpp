#ifndef TestServer_hpp
#define TestServer_hpp

#include <stdio.h>

#include "SimpleServer.hpp"

namespace HDE
{
    class TestServer : public SimpleServer{
        public:
            char buffer[30000] = {0};
            int new_socket;
            
            void accepter();
            void handler();
            void responder();

        public:
            TestServer();
            void launch();
    };
} // namespace HDE

#endif