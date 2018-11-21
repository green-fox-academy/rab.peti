#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H

#include "stringedInstrument.h"

class Violin : public StringedInstrument{
public:
    Violin();
    Violin(int numberOfStrings);
    void play() override;
    std::string sound() override;
};


#endif //INSTRUMENTS_VIOLIN_H
