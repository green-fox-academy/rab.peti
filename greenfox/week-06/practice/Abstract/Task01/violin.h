#ifndef TASK01_VIOLIN_H
#define TASK01_VIOLIN_H

#include "stringedInstrument.h"

class Violin : public StringedInstrument{
public:
    Violin();

    Violin(int n);

    std::string sound() override;

    void play() override;

};


#endif //TASK01_VIOLIN_H
