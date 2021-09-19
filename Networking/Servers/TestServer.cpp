#include "TestServer.hpp"

HDE::TestServer::TestServer() : SimpleServer(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10)
{
    launch();
}

void HDE::TestServer::accepter(){
    struct sockaddr_in address = get_socket()->get_address();
    int addr_len = sizeof(address);

    new_socket = accept(get_socket()->get_sock(), (struct sockaddr *) &address, (socklen_t *) &addr_len);

    read(new_socket, buffer, 30000);
}

void HDE::TestServer::handler(){
    std::cout << buffer << std::endl;
}

void HDE::TestServer::responder(){
    char *hello = "Hello World! From the Server!";
    write(new_socket, hello, strlen(hello));
    close(new_socket);
}

void HDE::TestServer::launch(){
    while (1)
    {
        std::cout << "======================WAITING======================" << std::endl;
        accepter();
        handler();
        responder();
        std::cout << "======================DONE======================" << std::endl;
    }
    

}