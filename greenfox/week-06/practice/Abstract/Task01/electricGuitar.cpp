#include "electricGuitar.h"

ElectricGuitar::ElectricGuitar() {_numberOfStrings = 6;}

std::string ElectricGuitar::sound() {
    return "Twang";
}

void ElectricGuitar::play() {
    std::cout << "Electric Guitar, a " << _numberOfStrings << " stringed instrument that goes "<< sound() << std::endl;
}

ElectricGuitar::ElectricGuitar(int n) {
    _numberOfStrings = n;
}
