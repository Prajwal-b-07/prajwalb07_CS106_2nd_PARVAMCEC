#include <iostream>
using namespace std;

class Student {
    string name;
    int rollnum;

public:
    Student(string name, int rollnum) : name(name), rollnum(rollnum) {}

    void inputstudent() {
        cout << "Enter the name of student: ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> rollnum;
    }

    void displayStudent() {
        cout << "\nStudent Details:\n";
        cout << "Name of student: " << name << endl;
        cout << "Roll number of student: " << rollnum << endl;
    }
};

int main() {
    string name;
    int rollnum;

    Student s1(name, rollnum);
    s1.inputstudent();
    s1.displayStudent();

    return 0;
} 
