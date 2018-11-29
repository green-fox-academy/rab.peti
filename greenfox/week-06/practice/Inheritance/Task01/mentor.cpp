#include "mentor.h"

Mentor::Mentor() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _level = Level::INTERMEDIATE;
}

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name, age, gender),
                                                                               _level(level) {}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << getGender() << " " << getLevel() << " mentor." << std::endl;
}

std::string Mentor::getLevel() const {
    if(_level == Level::JUNIOR)
        return "junior";
    else if(_level == Level::INTERMEDIATE)
        return "intermediate";
    else
        return "senior";
}
