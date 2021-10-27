#include <iostream>

using namespace std;

class Worker
{
    const int id {8};
public:
    string name {"Young"};
    string surname {"Leosia"};

    Worker();
    Worker(int pId, string pName, string pSurname);

    void getData();
};

Worker::Worker():
    id {13},
    name {"Domyslne Imię"},
    surname {"Domyślne Nazwisko"}
{
}
Worker::Worker(int pId, string pName, string pSurname):
    id {pId},
    name {pName},
    surname {pSurname}
{
    cout<<"Konstruktor parametryczny"<<endl;
}

void Worker::getData()
{
    cout<<"Id: "<<id<<"\nImie: "<<name<<", nazwisko: "<<surname<<endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_CTYPE, "polish");

    Worker nowak1 = Worker();
    nowak1.getData();

    Worker nowak = Worker(47, "oki", "mood");
    nowak.getData();
}
