#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H

#include "stringedInstrument.h"

class ElectricGuitar : public StringedInstrument {
public:
    ElectricGuitar();
    ElectricGuitar(int numberOfStrings);
    void play() override;
    std::string sound() override;
};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
