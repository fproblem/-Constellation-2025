#ifndef NETWORK_H
#define NETWORK_H

#include <vector>
#include <cstdint>
#include <string>

class Network {
public:
    Network(const std::string& ip, int port);
    ~Network();

    void send(const std::vector<uint8_t>& data);
    std::vector<uint8_t> receive();

private:
    std::string ip;
    int port;
    // Внутренние переменные для сокетов
};

#endif