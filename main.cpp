#include <iostream>
#include <thread>
#include <chrono>
#include <portaudio.h>

void captureAudio() {
    while (true) {
        std::cout << "Audio capture..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void playAudio() {
    while (true) {
        std::cout << "Audio playback..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    Pa_Initialize();
    std::thread t1(captureAudio);
    std::thread t2(playAudio);

    t1.join();
    t2.join();

    Pa_Terminate();
    return 0;
}