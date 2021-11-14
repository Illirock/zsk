#include <iostream>

using namespace std;

class Animal
{
    public:
    static unsigned short s_count;

    Animal();
    ~Animal();
};

unsigned short int Animal::s_count=0;

void createAnimal()
{
    Animal animal;
    cout<<"Wywolano createAnimal"<<endl;
}

Animal::Animal()
{
    s_count++;
    cout<<"Ilosc zwierzakow: "<<s_count<<endl;
}
Animal::~Animal()
{
    s_count--;
    cout<<"Ilosc zwierzakow: "<<s_count<<endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_CTYPE, "polish");

    createAnimal();
}

