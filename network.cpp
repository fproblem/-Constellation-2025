#include "network.h"
#include <iostream>
#include <winsock2.h> // Для Windows
// #include <sys/socket.h> // Для Linux/macOS

Network::Network(const std::string& ip, int port) : ip(ip), port(port) {
    // Инициализация сокетов
}

Network::~Network() {
    // Завершение работы сокетов
}

void Network::send(const std::vector<uint8_t>& data) {
    // Отправка данных по UDP
}

std::vector<uint8_t> Network::receive() {
    std::vector<uint8_t> data;
    // Прием данных по UDP
    return data;
}