#ifndef TASK01_ELECTRICGUITAR_H
#define TASK01_ELECTRICGUITAR_H

#include "stringedInstrument.h"

class ElectricGuitar : public StringedInstrument{
public:
    ElectricGuitar();

    ElectricGuitar(int n);

    std::string sound() override;

    void play() override;

};


#endif //TASK01_ELECTRICGUITAR_H
