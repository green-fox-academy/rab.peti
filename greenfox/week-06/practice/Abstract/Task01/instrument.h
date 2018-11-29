#ifndef TASK01_INSTRUMENT_H
#define TASK01_INSTRUMENT_H

#include <iostream>

class Instrument {
    virtual void play() = 0;
protected:
    std::string _name;
};


#endif //TASK01_INSTRUMENT_H
