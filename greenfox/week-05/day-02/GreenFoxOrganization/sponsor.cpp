#include <iostream>
#include "sponsor.h"

Sponsor::Sponsor() {
    //sets name to Jane Doe, age to 30, gender to female, company to Google and hiredStudents to 0
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _company = "Google";
    _hiredStudents = 0;
}

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) {
    _name = name;
    _age = age;
    _gender = gender;
    _company = company;
    _hiredStudents = 0;
}

void Sponsor::introduce() {
    //"Hi, I'm name, a age year old gender who represents company and hired hiredStudents students so far."
    if (_gender == Gender::MALE)
        std::cout << "Hi, I'm " << _name << ", a " << _age << " year old male who represents " << _company
                  << " and hired " << _hiredStudents << " students so far." << std::endl;
    else {
        std::cout << "Hi, I'm " << _name << ", a " << _age << " year old female who represents " << _company
                  << " and hired " << _hiredStudents << " students so far." << std::endl;
    }
}

void Sponsor::hire() {
    _hiredStudents++;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}