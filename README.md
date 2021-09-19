# Webserver Library written purely in C++

This library essentially uses websockets to create a simple server listening on the _local network_.

Library Structure:
```
.
├── hdelibc.hpp
├── Networking
│   ├── hdelibc-networking.hpp
│   ├── Servers
│   ├── Sockets
│   └── test.sh
├── out
│   └── test
├── README.md
└── serve.sh

```

This server, as a test serves on port 8080, which is the default port.

Steps for launching the server:
- Execute the shell script `serve.sh` locally.
- Go to http://localhost/ to make a request to the server.
- Voilà!

---

Reference: [This blog](https://medium.com/from-the-scratch/http-server-what-do-you-need-to-know-to-build-a-simple-http-server-from-scratch-d1ef8945e4fa)