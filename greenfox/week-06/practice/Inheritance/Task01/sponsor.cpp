#include "sponsor.h"

void Sponsor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << getGender() << " who represents " << _company
              << " and hired " << _hiredStudents << " students so far." << std::endl;
}

void Sponsor::hire() {
    _hiredStudents++;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

Sponsor::Sponsor() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _company = "Google";
    _hiredStudents = 0;
}

Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company) : Person(name, age,
                                                                                                       gender),
                                                                                                _company(company),
                                                                                                _hiredStudents(0) {}
