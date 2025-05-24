#include<iostream>
using namespace std;

class Student
{
    
string name;
public:
    Student(string name)
    {
        this->name = name;
        cout<<"constructor called for:"<<this->name<<endl;

    }

    ~Student()
    {
        cout<<"destructor called for:"<<name<<endl;
    }
};
int main()
{
    Student S1("Prajwal");
    Student S2("yashwanth");
}

