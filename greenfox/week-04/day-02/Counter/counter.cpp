#include "counter.h"

Counter::Counter() {
    _number = 0;
    _initialValue = 0;
}

Counter::Counter(int number) {
    _number = number;
    _initialValue = number;
}

void Counter::add(int number) {
    _number+= number;
}

void Counter::add() {
    _number++;
}

void Counter::reset() {
    _number = _initialValue;
}

int Counter::get() {
    return _number;
}
