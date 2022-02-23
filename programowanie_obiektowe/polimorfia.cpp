#include <iostream>

using namespace std;

class Vehicle
{
public:
    void stop()
    {
        cout<<"Zatrzymaj Pojazd"<<endl;
    }
};
class Car: public Vehicle
{
public:
    void stop()
    {
        cout<<"Zatrzymaj samochód"<<endl;
    }
};
class Bike: public Vehicle
{
public:
    void stop()
    {
        cout<<"Zatrzymaj rower"<<endl;
    }
};
class Rolls: public Vehicle
{
public:
    void stop()
    {
        cout<<"Zatrzymaj rolki"<<endl;
    }
};
int main()
{
    Vehicle *pojazd = new Vehicle();
    pojazd->stop();

    Rolls *rolki= new Rolls();
    rolki->stop();
}
