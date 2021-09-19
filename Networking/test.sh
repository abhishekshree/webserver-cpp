#!/usr/bin/env bash

echo "Building Test from Networking"
mkdir -p "../out"
g++ Servers/test.cpp Servers/TestServer.cpp Servers/SimpleServer.cpp Sockets/SimpleSocket.cpp Sockets/BindingSocket.cpp Sockets/ListeningSocket.cpp -w -o ../out/test

echo "Done!"