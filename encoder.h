#ifndef ENCODER_H
#define ENCODER_H

#include <vector>
#include <cstdint>
#include <string>

class Encoder {
public:
    Encoder(const std::string& codec);
    std::vector<uint8_t> encode(const std::vector<uint8_t>& data);
    std::vector<uint8_t> decode(const std::vector<uint8_t>& data);

private:
    std::string codec;
};

#endif