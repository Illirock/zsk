#include <iostream>

using namespace std;

class Worker
{
    public:
    string name, surname;

    void getData();

    Worker()
    {
        cout<<"Konstruktor domyslny"<<endl;
    }
    Worker(string pName, string pSurname);
    ~Worker()
    {
        cout<<"Destruktor domyslny"<<endl;
    }
};

void Worker::getData()
{
    cout<<"Imie i Nazwisko: "<<name<<" "<<surname<<endl;
}
Worker::Worker(string pName, string pSurname):
    name {pName},
    surname {pSurname}
{
    cout<<"Konstruktor parametryczny"<<endl;
}

void createObjectWorker()
{
    Worker worker;
    cout<<"Wywolano createObjectWorker"<<endl;
}
int main(int argc, char** argv)
{
    Worker *p_nowak = new Worker("Janusz","Nowak");
    createObjectWorker();
    p_nowak->getData();
    delete p_nowak;

}
