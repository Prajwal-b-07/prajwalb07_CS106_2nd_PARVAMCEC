#include<iostream>
using namespace std;
class Person
{

    protected:
        string name;
        int age;
        int weight;

    public:
        Person()
        {
            cout<<"person constructor"<<endl;
        }
};

class Student : public Person
{
    int roll_num;

public:
    Student(string name,int age , int weight, int roll_no)
    {
        cout<<"student constructor"<<endl;
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_num = roll_num;
    }
    void display()
    {
        cout<<"student details:"<<endl;
        cout<<"student name:"<<name<<endl;
        cout<<"student age :"<<age<<endl;
        cout<<"student weight:"<<weight<<endl;
        cout<<"student roll number:"<<roll_num<<endl;
    }
};

int main()
{
    Student s1("prajwal",23,50,102);
    s1.display();
}
