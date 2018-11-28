#ifndef TASK03_ANIMAL_H
#define TASK03_ANIMAL_H


class Animal {
public:
    Animal();

    int getHunger() const;

    int getThirst() const;

    void eat();
    void drink();
    void play();

public:

private:
    int _hunger;
    int _thirst;
};


#endif //TASK03_ANIMAL_H
