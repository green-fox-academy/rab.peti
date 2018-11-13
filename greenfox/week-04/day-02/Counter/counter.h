#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

class Counter {
public:
    Counter();
    Counter(int number);
    void add(int number);
    void add();
    void reset();
    int get();

private:
    int _number;
    int _initialValue;
};


#endif //COUNTER_COUNTER_H
