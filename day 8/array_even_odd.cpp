#include<iostream>
using namespace std;

int main()
{
    int arr[10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    int evencount = 0 ,oddcount = 0;
    for(int i=0;i<10;i++)
    {
        if(*(ptr+i)%2== 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
        
    }
    cout<<"even count:"<<evencount<<endl;
    cout<<"odd count: "<<oddcount<<endl;
}


// revese of array using pointer