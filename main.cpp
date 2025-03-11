#include "airnelectro.h"
#include "psu.h"
#include "gui.h"

int main() {

    AirnElectro airnelectro;
    PSU psu;
    GUI gui;

    airnelectro.start();
    psu.powerOn();
    gui.run();
    

    return 0;
}
