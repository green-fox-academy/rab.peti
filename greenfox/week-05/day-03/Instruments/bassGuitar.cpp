#include <iostream>

#include "bassGuitar.h"

BassGuitar::BassGuitar() {
    _name = "BassGuitar";
    _numberOfStrings = 7;
}

BassGuitar::BassGuitar(int numberOfStrings) {
    _name = "BassGuitar";
    _numberOfStrings = numberOfStrings;
}

void BassGuitar::play() {
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;
}

std::string BassGuitar::sound(){
    return "Duum-duum-duum";
}