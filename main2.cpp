#include <iostream>
#include <fstream>
#include <vector>
#include "student.h"
using namespace std;

vector<Student> students;

void loadFromFile() {
    students.clear();
    ifstream fin("data.txt");
    Student s;
    while (fin >> s.id) {
        fin.ignore();
        getline(fin, s.name);
        fin >> s.cgpa;
        students.push_back(s);
    }
    fin.close();
}

void saveToFile() {
    ofstream fout("data.txt");
    for (Student s : students) {
        fout << s.id << "\n" << s.name << "\n" << s.cgpa << "\n";
    }
    fout.close();
}

void addStudent() {
    Student s;
    s.input();
    students.push_back(s);
    saveToFile();
    cout << "Student added!\n";
}

void displayAll() {
    for (Student s : students) {
        s.display();
    }
}

int main() {
    loadFromFile();
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Show All Students\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}
