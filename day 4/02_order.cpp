#include<iostream>
using namespace std;

class BankAccno
{
    int ac_no;
public:
    BankAccno(int acc_no)
    {
    this->acc_no = acc_no;
        cout<<"constructor called for:"<<this->acc_no<<endl;
    }

    ~BankAccno()
    {
        cout<<"destructor called for:"<<name<<endl;
    }
};
int main()
{
    BankAccno B1("000999909903287");
    BankAccno B2("000989999987778");
}
