#include "postIt.h"

PostIt::PostIt() {
    _backgroundColor = "yellow";
    _text = "default text";
    _textColor = "black";
}

PostIt::PostIt(std::string backgroundColor, std::string text, std::string textColor) {
    _backgroundColor = backgroundColor;
    _text = text;
    _textColor = textColor;
}

void PostIt::setBackgroundColor(std::string backgroundColor) {
    _backgroundColor = backgroundColor;
}

void PostIt::setText(std::string text) {
    _text = text;
}

void PostIt::setTextColor(std::string textColor) {
    _textColor = textColor;
}

std::string PostIt::getBackgroundColor() {
    return _backgroundColor;
}

std::string PostIt::getText() {
    return _text;
}

std::string PostIt::getTextColor() {
    return _textColor;
}



