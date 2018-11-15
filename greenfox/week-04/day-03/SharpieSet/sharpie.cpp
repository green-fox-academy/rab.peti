#include "sharpie.h"

Sharpie::Sharpie(std::string color, float width) {
    _color = color;
    _width = width;
    _inkAmount = 100;

}

void Sharpie::use() {
    _inkAmount--;
}

float Sharpie::getInkAmount() {
    return _inkAmount;
}
