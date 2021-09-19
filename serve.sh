#!/usr/bin/env bash

if [ -f "./out/test" ]; then
    echo "Attempting to run the server"
    sudo ./out/test
else
    cd Networking
    ./test.sh
    cd ..
    sudo ./out/test
fi
