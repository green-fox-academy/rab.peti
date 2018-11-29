#ifndef TASK02_PLANT_H
#define TASK02_PLANT_H

#include <iostream>

class Plant {
public:
    const std::string &getColor() const;

    float getWater() const;

    virtual bool needsWater();

    virtual void watering(float n);

protected:
    float _water;
    std::string _color;
};


#endif //TASK02_PLANT_H
