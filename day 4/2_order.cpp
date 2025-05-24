#include<iostream>
using namespace std;

class Bankname
{
    string name;
public:
    Bankname(string name)
    {
    this->name = name;
        cout<<"constructor called for:"<<this->name<<endl;
    }

    ~Bankname()
    {
        cout<<"destructor called for:"<<name<<endl;
    }
};
int main()
{
    Bankname B1("ICICI");
    Bankname B2("Kotak");
}


