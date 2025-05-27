#include<iostream>
using namespace std;

Class Animal
{
    public:
        virtual void makeSound()\
        {
            cout<<"animal making sound";
        }
};

class Dog : public Animal
{
    public:
        void makesound() override
        {
            cout<<"dog Making sound";
        }
};

int main()
{
    Animal *a1;
    Dog d1;
    a1 = &d1;
    a1->makeSound();
}