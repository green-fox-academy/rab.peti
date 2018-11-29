#ifndef TASK01_STUDENT_H
#define TASK01_STUDENT_H

#include "person.h"


class Student : public Person{
public:
    Student();

    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);

    void getGoal() override;
    void introduce() override;
    void skipDays(int numberOfDays);


private:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //TASK01_STUDENT_H
