#include "bassGuitar.h"

BassGuitar::BassGuitar() {_numberOfStrings = 4;}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}

void BassGuitar::play() {
    std::cout << "Bass Guitar, a " << _numberOfStrings << " stringed instrument that goes "<< sound() << std::endl;
}

BassGuitar::BassGuitar(int n) {
    _numberOfStrings = n;
}

