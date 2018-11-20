#ifndef GREENFOXORGANIZATION_PERSON_H
#define GREENFOXORGANIZATION_PERSON_H

#include <string>

enum class Gender {
    MALE,
    FEMALE
};

class Person {
public:
    Person();

    Person(const std::string &name, int age, const Gender &gender);

    virtual void introduce();

    virtual void getGoal();

protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //GREENFOXORGANIZATION_PERSON_H
