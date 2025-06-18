#include "student.h"
#include <iostream>
using namespace std;

void Student::input() {
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter CGPA: ";
    cin >> cgpa;
}

void Student::display() {
    cout << "ID: " << id << "\nName: " << name << "\nCGPA: " << cgpa << "\n\n";
}
