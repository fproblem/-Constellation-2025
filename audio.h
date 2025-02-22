#ifndef AUDIO_H
#define AUDIO_H

#include <vector>
#include <cstdint>

class Audio {
public:
    Audio();
    ~Audio();

    std::vector<uint8_t> capture(); // Захват аудио с микрофона
    void play(const std::vector<uint8_t>& data); // Воспроизведение аудио

private:
    // Внутренние переменные для PortAudio
};

#endif