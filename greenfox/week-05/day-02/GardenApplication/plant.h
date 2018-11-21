#ifndef GARDENAPPLICATION_PLANT_H
#define GARDENAPPLICATION_PLANT_H

#include <string>

enum class Color {
    RED,
    GREEN,
    BLUE,
    ORANGE,
    PINK,
    YELLOW,
    PURPLE
};

class Plant {
public:
    std::string getColor();
    double getWater();

    virtual std::string needsWater() = 0;
    bool need();
    virtual void watering(int amount) = 0;

protected:
    float _water;
    Color _color;
};


#endif //GARDENAPPLICATION_PLANT_H
