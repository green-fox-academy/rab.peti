#ifndef TASK01_PERSON_H
#define TASK01_PERSON_H

#include <iostream>

enum class Gender{
    MALE,
    FEMALE
};
class Person {
public:
    Person();

    Person(const std::string &name, int age, Gender gender);

    virtual void introduce();

    std::string getGender() const;

    virtual void getGoal();

protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //TASK01_PERSON_H
