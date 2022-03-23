#include <iostream>

using namespace std;

class Animal
{
    public:
    void className()
    {
        cout<<"Animal"<<endl;
    }
    virtual void speak()=0;
};
class Dog: public Animal
{
    void className()
    {
        cout<<"Dog"<<endl;
    }
    void speak() override
    {
        cout<<"I'm speed"<<endl;
    }
};
