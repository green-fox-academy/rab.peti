#ifndef GREENFOXORGANIZATION_MENTOR_H
#define GREENFOXORGANIZATION_MENTOR_H

#include "person.h"

enum class Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor();

    Mentor(std::string name, int age, Gender gender, Level level);

    void getGoal();

    void introduce();

private:
    Level _level;
};


#endif //GREENFOXORGANIZATION_MENTOR_H
