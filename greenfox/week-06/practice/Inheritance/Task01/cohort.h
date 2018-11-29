#ifndef TASK01_COHORT_H
#define TASK01_COHORT_H

#include <iostream>
#include <vector>
#include "student.h"
#include "mentor.h"

class Cohort {
public:
    Cohort(const std::string &name);

    void addStudent(Student*);
    void addMentor(Mentor*);
    void info();

public:

private:
    std::string _name;
    std::vector<Student> _students;
    std::vector<Mentor> _mentors;
};


#endif //TASK01_COHORT_H
