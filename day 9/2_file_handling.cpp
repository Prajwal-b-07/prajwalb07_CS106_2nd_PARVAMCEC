#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    ifstream fin("file_handling.txt");
    string line;
    while(getline(fin,line))
    {
        cout<<line<<endl;

    }
    fin.close();
}
