#include<iostream>
using namespace std;
class Person
{

    protected:
        string name;
        int age;
        int weight;

    public:
        Person(string name,int age,int weight) : name(name),age(age)
        {
            cout<<"person constructor"<<endl;
            this->weight = weight;
        }
};

class Student : public Person
{
    int roll_num;

public:
    Student(string name,int age , int weight, int roll_no) : Person(name,age,weight),roll_num(roll_num)
    {
        cout<<"student constructor"<<endl;
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
