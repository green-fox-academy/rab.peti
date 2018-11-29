#include "violin.h"

Violin::Violin() {_numberOfStrings = 4;}

std::string Violin::sound() {
    return "Screech";
}

void Violin::play() {
    std::cout << "Violin, a " << _numberOfStrings << " stringed instrument that goes "<< sound() << std::endl;
}

Violin::Violin(int n) {
    _numberOfStrings = n;
}
