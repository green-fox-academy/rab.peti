#include <iostream>
#include "mentor.h"


Mentor::Mentor() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _level = Level::INTERMEDIATE;
}

Mentor::Mentor(std::string name, int age, Gender gender, Level level) {
    _name = name;
    _age = age;
    _gender = gender;
    _level = level;
}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {
    if (_gender == Gender::MALE) {
        if (_level == Level::JUNIOR) {
            std::cout << "Hi, I'm" << _name << ", a " << _age << " year old male junior mentor." << std::endl;
        } else if (_level == Level::INTERMEDIATE) {
            std::cout << "Hi, I'm" << _name << ", a " << _age << " year old male intermediate mentor." << std::endl;
        } else {
            std::cout << "Hi, I'm" << _name << ", a " << _age << " year old male senior mentor." << std::endl;
        }
    } else {
        if (_level == Level::JUNIOR) {
            std::cout << "Hi, I'm" << _name << ", a " << _age << " year old female junior mentor." << std::endl;
        } else if (_level == Level::INTERMEDIATE) {
            std::cout << "Hi, I'm" << _name << ", a " << _age << " year old female intermediate mentor." << std::endl;
        } else {
            std::cout << "Hi, I'm" << _name << ", a " << _age << " year old female senior mentor." << std::endl;
        }
    }
}