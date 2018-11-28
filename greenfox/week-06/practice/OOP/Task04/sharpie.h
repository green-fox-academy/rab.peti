#ifndef TASK04_SHARPIE_H
#define TASK04_SHARPIE_H

#include <string>

class Sharpie {
public:
    Sharpie(const std::string &color, float width);
    void use();

    const std::string &getColor() const;

    float getWidth() const;

    float getInkAmount() const;

private:
    std::string _color;
    float _width;
    float _inkAmount = 100;
};


#endif //TASK04_SHARPIE_H
