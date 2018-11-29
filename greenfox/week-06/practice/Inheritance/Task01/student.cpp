//
// Created by Peti on 2018. 11. 29..
//

#include "student.h"

Student::Student() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender ::FEMALE;
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization) : Person(
        name, age, gender), _previousOrganization(previousOrganization), _skippedDays(0) {}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce() {
    std::cout << "Hi, I'm "<< _name << ", a " << _age << " year old " << getGender() << " from " << _previousOrganization << " who skipped "<< _skippedDays <<
    " days from the course already." <<std::endl;
}

void Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
}
