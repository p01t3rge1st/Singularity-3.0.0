#ifndef AIRNELECTRO_H
#define AIRNELECTRO_H
#include "airnelectro.h"
#include <iostream>
#include <string>

class AirnElectro {
public:
    AirnElectro();
    void start();
    void sysCheck();
    std::string readSensors();
    std::string decodeSensors(std::string packet);
    void hardRestart();
    void setC02measureInterval(int seconds);
    void requestData();
};

#endif // AIRNELECTRO_H
