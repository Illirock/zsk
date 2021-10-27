#include <iostream>

using namespace std;

class Worker
{
public:
    int id {8};
    string name {"Young"};
    string surname {"Leosia"};

    Worker();
    Worker(int pId, string pName, string pSurname);

    void getData();
};

Worker::Worker()
{
    id=13;
    name="Domy�lne Imi�";
    surname="Domy�lne Nazwisko";
}
Worker::Worker(int pId, string pName, string pSurname)
{
    id=pId;
    name=pName;
    surname=pSurname;
}

void Worker::getData()
{
    cout<<"Id: "<<id<<"\nImi�: "<<name<<", nazwisko: "<<surname<<endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_CTYPE, "polish");

    Worker nowak;
    nowak.getData();

    Worker nowak1 = Worker(10, "OKI", "MOOD");
    nowak1.getData();

    Worker nowak2 = Worker();
    nowak2.getData();
}
