#include <iostream>

using namespace std;

class Animal
{
private:
    float weight, age;
public:
    void look()
    {
        cout<<"Swiecioch patrzy"<<endl;
    }
    virtual void breathe()
    {
        cout<<"Swiecioch oddycha"<<endl;
    }
};
class Fish: public Animal
{
public:
    virtual void breathe()
    {
        cout<<"Piatek oddycha siuuuuuuuu"<<endl;
    }
    void swim()
    {
        cout<<"SUUUUUUUUUPEEEEEEER"<<endl;
    }
};
class Mammal: public Animal
{
    virtual void breathe()
    {
        cout<<"Rudi oddycha ajajaj"<<endl;
    }
    void run()
    {
        cout<<"ALE OGIEN"<<endl;
    }
};
class Bird: public Animal
{
    virtual void breathe()
    {
        cout<<"Majka oddycha UwU"<<endl;
    }
    void fly()
    {
        cout<<"OMG"<<endl;
    }
};

int main()
{
    Fish karp;
    Animal *lidl = &karp;
    lidl->breathe();

    Bird gawron;
    lidl =  &gawron;
    lidl->breathe();

}

