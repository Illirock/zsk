#include <iostream>

using namespace std;

class Worker
{
private:
    string name, surname, pesel;
public:
    short int height;

    Worker(string, string, string, short int);

    void setName(string pName);
    string getName();
    void getData();
};

Worker::Worker(string pName, string pSurname, string pPesel, short int pHeight)
{
    name = pName;
    surname = pSurname;
    pesel = pPesel;
    height = pHeight;
}

void Worker::setName(string pName)
{
    name=pName;
}
string Worker::getName()
{
    return name;
}

void Worker::getData()
{
    cout<<endl;
    cout<<"Imie: "<<name<<endl;
    cout<<"Nazwisko: "<<surname<<endl;
    cout<<"PESEL: "<<pesel<<endl;
    cout<<"Wzorst: "<<height<<endl;
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    Worker nowak("Janusz", "Nowak", "11122233344", 177);
    Worker *wsk =& nowak;
    wsk->setName("Bonus");
    cout<<"Imiê: "<<wsk->getName()<<endl;
    nowak.getData();
}
