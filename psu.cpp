#include "psu.h"
#include <iostream>

PSU::PSU() {}

void PSU::powerOn() {

    std::cout << "[PSU] boot/ping phase..." << std::endl;
    
    if(sysCheck()) {

        std::cout << "[PSU]: General Failure " << std::endl;
    }

}

int PSU::sysCheck(){
    
    // logika do sprawdzenia systemów
    // kody błędów do ustalenia
    // zwraca liczbę całkowita odpowiedzialną za jakiś błąd

    std::cout << "[PSU] System check done..." << std::endl;
    std::cout << "[PSU] All systems seems ok..." << std::endl;
    std::cout << "[PSU] Operation done " << std::endl;

    return 0;
}

int PSU::pwrBus(bool state) {

    // logika do wysłania rządania do wyłączenia/włączenia listwy zasilającej dany podsystem
    // zwraca int do obsługi i wyświetlania błędów


    std::cout << "[MPU] Request for [PSU]: Power Bus 4 State LOW" << std::endl;
    std::cout << "[MPU] Response ok.." << std::endl;
    std::cout << "[PSU]: Operation done" << std::endl;

    return 0;
}

int PSU::getState() {

    // wysyła request o status przekaźników i to tyle zwykły getter

}