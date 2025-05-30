// append()

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream fout;
  fout.open("file_handling.txt",ios::app);
  fout<<"c++ programming\n";
  fout.close();
  fout<<"file is closed"<<endl;
}