#ifndef TASK04_SHARPIESET_H
#define TASK04_SHARPIESET_H

#include <vector>

#include "sharpie.h"

class SharpieSet {
public:
    int countUsable();
    void removeTrash();
    void addElement(Sharpie *sharpie);
private:
    std::vector<Sharpie*> _sharpieVector;
};


#endif //TASK04_SHARPIESET_H
