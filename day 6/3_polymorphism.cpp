#include<iostream>
using namespace std;

class Message
{
    public:
         void sendmessage(string email,string message)
        {
            cout<<"email sent successfully"<<endl;
            cout<<"email:"<<email<<endl;
            cout<<"message:"<<message<<endl;
        }
        void sendmessage(long long ph,int otp)
        {
            cout<<"email sent successfully"<<endl;
            cout<<"email:"<<email<<endl;
            cout<<"message:"<<message<<endl;
            cout<<"otp:"<<otp<<endl;
        }
};
int main()
{
    Message m1;
    m1.sendmessage("hi@gmail.com","hello world");
    m1.sendmessage(9999999999,123);
}
