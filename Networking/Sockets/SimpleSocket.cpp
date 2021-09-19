#include "SimpleSocket.hpp"

// Default constructor

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port,u_long interface){

    // Define address structure
    address.sin_family = domain;
    address.sin_port = htons(port); // htons() to conver host byte order to network byte order
    address.sin_addr.s_addr = htonl(interface);

    // Establish connection
    sock = socket(domain, service, protocol);
    test_connection(sock);
}

// Test connection virtual function

void HDE::SimpleSocket::test_connection(int test_item){
    if (test_item < 0)
    {
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }   
}

// Getters

struct sockaddr_in HDE::SimpleSocket::get_address(){
    return address;
}

int HDE::SimpleSocket::get_sock(){
    return sock;
}

int HDE::SimpleSocket::get_connection(){
    return connection;
}

// Setters
void HDE::SimpleSocket::set_connection(int conn){
    connection = conn;
}
