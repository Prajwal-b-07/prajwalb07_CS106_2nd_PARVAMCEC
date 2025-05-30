#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
{
    ofstream fout;
    fout.open("file_handling.txt");
    fout<<"hello world\n";
    fout.close();
    cout<<"file is closed"<<endl;

    ifstream fin("file_handling.txt");
    string line;
    while(getline(fin,line))
        {
            cout<<line<<endl;

        }
    fin.close();
}

