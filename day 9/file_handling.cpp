#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //creating object for writing file
    ofstream fout;
    //opening file in write mode
    fout.open("file_handling.txt");//it will open the file in write mode.if the file is not
    // present in the "cwd" it will create a new file with specified name
    //insert some data.
    fout<<"hello world\n";
    //close the file
    fout.close();
    cout<<"file is closed"<<endl;
    

}
