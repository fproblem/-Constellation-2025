#include "audio.h"
#include "portaudio.h"

Audio::Audio() {
    // Инициализация PortAudio
    Pa_Initialize();
}

Audio::~Audio() {
    // Завершение работы PortAudio
    Pa_Terminate();
}

std::vector<uint8_t> Audio::capture() {
    std::vector<uint8_t> data;
    // Захват аудио с микрофона
    return data;
}

void Audio::play(const std::vector<uint8_t>& data) {
    // Воспроизведение аудио через динамики
}