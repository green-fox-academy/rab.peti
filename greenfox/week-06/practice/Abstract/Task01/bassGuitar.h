#ifndef TASK01_BASSGUITAR_H
#define TASK01_BASSGUITAR_H

#include "stringedInstrument.h"

class BassGuitar : public StringedInstrument{
public:
    BassGuitar();

    BassGuitar(int n);

    std::string sound() override;

    void play() override;

};


#endif //TASK01_BASSGUITAR_H
