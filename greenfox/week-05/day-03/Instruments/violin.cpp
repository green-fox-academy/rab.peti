#include <iostream>

#include "violin.h"

Violin::Violin() {
    _name = "Violin";
    _numberOfStrings = 4;
}

Violin::Violin(int numberOfStrings) {
    _name = "Violin";
    _numberOfStrings = numberOfStrings;
}

void Violin::play() {
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;
}

std::string Violin::sound(){
    return "Screech";
}