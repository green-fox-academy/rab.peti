#ifndef TASK01_MENTOR_H
#define TASK01_MENTOR_H

#include "person.h"

enum class Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor();

    Mentor(const std::string &name, int age, Gender gender, Level level);

    void getGoal() override;

    void introduce() override;

    std::string getLevel() const;

public:

private:
    Level _level;
};


#endif //TASK01_MENTOR_H
