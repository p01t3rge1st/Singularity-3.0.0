#include "airnelectro.h"
#include "psu.h"
#include "gui.h"
#include <string>
#include <iostream>

int main() {

    std::cout << '\n';

    std::cout << R"(┏┓•      ┓    •     ┏┓
┗┓┓┏┓┏┓┓┏┃┏┓┏┓┓╋┓┏   ┫
┗┛┗┛┗┗┫┗┻┗┗┻┛ ┗┗┗┫  ┗┛
      ┛          ┛    

)" << '\n';

    std::cout << "Version 3.0.0 Raspberry Pi Main Control Unit" << std::endl;
    std::cout << '\n';

    AirnElectro airnelectro;
    PSU psu;
    GUI gui;

    airnelectro.start();
    psu.powerOn();
    gui.run(); // ale będzie jebania się nie mogę się kurwa doczekac


    return 0;
}
