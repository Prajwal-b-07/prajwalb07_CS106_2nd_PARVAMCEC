
#include<iostream>
using namespace std;
class Employee
{
private:
    string emp_name;
    int emp_id;
public:
    Student(string emp_name, int id):name(emp_name),id(emp_id)
    {
        cout<<"constructor is called"<<endl;
    }
    void display()
    {
       cout<<"employee name:"<<emp_name<<endl;
       cout<<"employyee id:"<<emp_id<<endl;
    }
};
int main()
{
    Employee e1("prajwal",107);
    e1.display();
}
