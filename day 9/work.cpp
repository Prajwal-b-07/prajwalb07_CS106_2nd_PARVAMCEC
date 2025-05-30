#include<iostream>
#include<fstream.
using namespace std;


int main()
{
    int a,b,sum;
    fout<<"enter any two numbers : "<<endl;
    fin>>a>>b;
    sum=a+b;
    ofstream fout;
    fout.open("2_file_handling.txt");
    fout<<"Sum of a and b is :"sum;
    return 0;
}