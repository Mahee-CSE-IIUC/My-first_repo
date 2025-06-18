#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    float cgpa;

    void input();
    void display();
};

#endif
