//
// Created by Peti on 2018. 11. 28..
//

#include "counter.h"

Counter::Counter(int value) : _value(value) {
    _resetValue = value;
}

Counter::Counter() {
    _value = 0;
    _resetValue = _value;
}

void Counter::add() {
    _value++;
}

void Counter::add(int number) {
    _value += number;
}

void Counter::reset() {
    _value = _resetValue;
}

int Counter::get() const {
    return _value;
}
