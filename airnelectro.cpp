#include "airnelectro.h"
#include <iostream>
#include <string>

AirnElectro::AirnElectro() {}

void AirnElectro::start() {
    std::cout << "AirnElectro started!" << std::endl;
}

std::string AirnElectro::readSensors() {

    // odbierz pakiet
    std::string youngest_packet = "Gówno bla bla bla";

    std::string decoded_packet = decodeSensors(youngest_packet);

    return decoded_packet;


}

std::string AirnElectro::decodeSensors(std::string packet) {

    // logika decodowania tego gówna, ale mi wstyd kurwa że canbus mnie pokonał ja jebie

    
    return "Odkodowany pakiet bla bla";
}


void AirnElectro::requestData(){

    std::string current_reading = readSensors();

    // logika do oddzielania i indywidowalnego przydzielenia do zmiennych klasy
    /*
    c02 = tyle
    pm1208 = tyle
    geiger = tyle
    itd...
    
    */

   // potem można dodac gettery [!]

}
