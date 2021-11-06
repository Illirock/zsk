#include <iostream>

using namespace std;

struct Date
{
    int dd,mm,yyyy;
};
class Car
{
    public:
    int id;
    string brand, model, color;
    unsigned short int power;
    float price;
    Date dateOfProduction;

    void getData();

    Car(int, string, string, string, unsigned short int, float, Date);
};
    Car(int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float, Date pDateOfProduction);
    {
        id=pId;
    };

void Car::getData()
{
    cout<<"Id: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nRok produkcji: "
    <<dateOfProduction.yyyy<<"\nMoc: "<<power<<"\nKolor: "<<color<<"\nCena: "<<price;
}

int main(int argc, char** argv)
{
    setlocale(LC_CTYPE, "polish");
    Car ferrari;
    ferrari.getData();
}
