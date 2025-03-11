#ifndef PSU_H
#define PSU_H

class PSU {

public:
    PSU();
    void powerOn();
    int sysCheck();
    int pwrBus(bool pwr_state);
    int getState();
};

#endif // PSU_H
