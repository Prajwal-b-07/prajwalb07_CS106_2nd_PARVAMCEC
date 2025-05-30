#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    ofstream fout("4_file_handling.txt");
    fout.put('H');
    fout.close();
    ifsteam fin("2_file_handling.txt");
    char v1;
    fin.get(v1);
    fin.close();
    cout<<"the value is:"<<v1<<end;
}
