#include<iostream>
using namespace std;

int main()

{
    int a = 10;
    
    int *a1 = new int;
    *a1 = 20;
    cout<<"the value in a1: "<<*a1<<endl;
    delete a1;
    return 0;
}