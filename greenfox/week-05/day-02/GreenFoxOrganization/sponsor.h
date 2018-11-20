#ifndef GREENFOXORGANIZATION_SPONSOR_H
#define GREENFOXORGANIZATION_SPONSOR_H

#include "person.h"

class Sponsor : public Person {
public:
    Sponsor();

    Sponsor(std::string name, int age, Gender gender, std::string company);

    void introduce();

    void hire();

    void getGoal();

private:
    std::string _company;
    int _hiredStudents;
};


#endif //GREENFOXORGANIZATION_SPONSOR_H
