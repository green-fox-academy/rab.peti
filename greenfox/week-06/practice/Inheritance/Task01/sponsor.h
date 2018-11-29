#ifndef TASK01_SPONSOR_H
#define TASK01_SPONSOR_H

#include "person.h"

class Sponsor : public Person {
public:


    Sponsor();

    Sponsor(const std::string &name, int age, Gender gender, const std::string &company);

    void introduce() override;
    void hire();
    void getGoal() override;

private:
    std::string _company;
    int _hiredStudents;
};


#endif //TASK01_SPONSOR_H
