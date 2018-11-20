#ifndef GREENFOXORGANIZATION_STUDENT_H
#define GREENFOXORGANIZATION_STUDENT_H

#include "person.h"

class Student : public Person {
public:
    Student();

    Student(std::string name, int age, Gender gender,
            std::string previousOrganization); // beside the given parameters, it sets skippedDays to 0

    void getGoal() override;

    void introduce() override;

    void skipDays(int numberOfDays);

private:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //GREENFOXORGANIZATION_STUDENT_H
