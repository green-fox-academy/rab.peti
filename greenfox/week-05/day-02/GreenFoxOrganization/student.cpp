#include <iostream>
#include "student.h"

Student::Student() {
    //sets name to Jane Doe, age to 30, gender to female, previousOrganization to The School of Life, skippedDays to 0
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}

Student::Student(std::string name, int age, Gender gender, std::string previousOrganisation) {
    _name = name;
    _age = age;
    _gender = gender;
    _previousOrganization = previousOrganisation;
    _skippedDays = 0;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce() {
    if (_gender == Gender::MALE)
        std::cout << "Hi, I'm " << _name << ", a " << _age << " year old male from " << _previousOrganization
                  << " who skipped " << _skippedDays << " days from the course already." << std::endl;
    else {
        std::cout << "Hi, I'm " << _name << ", a " << _age << " year old female from " << _previousOrganization
                  << " who skipped " << _skippedDays << " days from the course already." << std::endl;
    }
}

void Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
}
