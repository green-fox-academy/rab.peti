//
// Created by Peti on 2018. 11. 28..
//

#include "sharpie.h"

Sharpie::Sharpie(const std::string &color, float width) : _color(color), _width(width) {}

void Sharpie::use() {
    _inkAmount--;
}

const std::string &Sharpie::getColor() const {
    return _color;
}

float Sharpie::getWidth() const {
    return _width;
}

float Sharpie::getInkAmount() const {
    return _inkAmount;
}
