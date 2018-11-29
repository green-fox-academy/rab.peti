#ifndef TASK01_STRINGEDINSTRUMENT_H
#define TASK01_STRINGEDINSTRUMENT_H

#include "instrument.h"

class StringedInstrument : public Instrument{
    virtual std::string sound() = 0;
protected:
    int _numberOfStrings;
};


#endif //TASK01_STRINGEDINSTRUMENT_H
