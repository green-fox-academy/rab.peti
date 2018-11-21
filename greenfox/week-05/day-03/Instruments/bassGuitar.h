#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H

#include "stringedInstrument.h"

class BassGuitar : public StringedInstrument{
public:
    BassGuitar();
    BassGuitar(int numberOfStrings);
    void play() override;
    std::string sound() override;
};


#endif //INSTRUMENTS_BASSGUITAR_H
