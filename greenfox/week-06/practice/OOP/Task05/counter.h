#ifndef TASK05_COUNTER_H
#define TASK05_COUNTER_H

#include <string>

class Counter {
public:
    Counter();

    Counter(int value);

    int get() const;

    void add();
    void add(int number);
    void reset();


private:
    int _value;
    int _resetValue;
};


#endif //TASK05_COUNTER_H
