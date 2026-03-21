#include <iostream>
#include <cstdio>

#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main() {
    constexpr int kPort {56789};

    // Create a TCP socket
    int socket_fd = socket(AF_INET, SOCK_STREAM, 0);

    if (socket_fd == -1) {
        std::perror("socket");
        return 1;
    }

    std::cout << "socket created, fd = " << socket_fd << std::endl;

    // Bind the TCP socket
    sockaddr_in server_addr {};
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(kPort);
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(socket_fd, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        std::perror("bind");
        close(socket_fd);
        return 1;
    }

    std::cout << "bind succeeded" << std::endl;

    // Listen on port
    if (listen(socket_fd, SOMAXCONN) == -1) {
        std::perror("listen");
        close(socket_fd);
        return 1;
    }

    std::cout << "listen succeeded" << std::endl;

    // Accept
    std::cout << "waiting in accept..." << std::endl;

    int client_fd = accept(socket_fd, nullptr, nullptr);

    if (client_fd == -1) {
        std::perror("accept");
        close(socket_fd);
        return 1;
    }

    std::cout << "client connected, fd = " << client_fd << std::endl;

    // Close sockets
    close(client_fd);
    close(socket_fd);

    std::cout << "sockets closed" << std::endl;

    return 0;
}