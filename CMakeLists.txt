cmake_minimum_required(VERSION 3.10)

project(CONSTELLATION)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Указываем путь к PortAudio
set(PortAudio_DIR "C:/portaudio")  # Замени на путь к PortAudio
set(PortAudio_INCLUDE_DIRS "${PortAudio_DIR}/include")
set(PortAudio_LIBRARIES "${PortAudio_DIR}/lib/libportaudio.a")  # Или .dll/.so

# Добавляем исходные файлы
set(SOURCES
    main.cpp
)

# Подключаем PortAudio
include_directories(${PortAudio_INCLUDE_DIRS})
link_directories(${PortAudio_DIR}/lib)

# Подключаем Winsock2 (для Windows)
if(WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lws2_32")
endif()

# Создаем исполняемый файл
add_executable(CONSTELLATION ${SOURCES})
target_link_libraries(CONSTELLATION PRIVATE ${PortAudio_LIBRARIES})