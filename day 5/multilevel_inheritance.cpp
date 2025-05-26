#include<iostream>
using namespace std;
class Person
{

    protected:
        string name;
        int age;
        int weight;

    public:
        Person(string name,int age,int weight) : name(name),age(age),weight(weight)
        {
            cout<<"person constructor"<<endl;
        }
};

class employee : public Person
{
    protected:
        int emp_id;

public:
    Employee(string name,int age , int weight, int roll_no) : Person(name,age,weight),emp_id(emp_id)
    {
        cout<<"Employee constructor"<<endl;
    }
};
class manager : public Employee
{
    int salary;
 

    
public:
    manager(string name,int age , int weight, int emp_id) : employee(name,age,weight),emp_id(emp_id),salary(salary)
    {
        cout<<"manager constructor"<<endl;
    }
 void display()
    {
        cout<<"manager details:"<<endl;
        cout<<"manager name:"<<name<<endl;
        cout<<"manager age :"<<age<<endl;
        cout<<"manager weight:"<<weight<<endl;
        cout<<"employee id:"<<emp_id<<endl;
        cout<<"manager salary:"<<salary<<endl;
    }
}

int main()
{
    Manager m1("prajwal",23,50,102);
    m1.display();
}
