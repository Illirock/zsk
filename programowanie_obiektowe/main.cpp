#include <iostream>

using namespace std;

class Worker {
    public:
// deklaracja zmiennych członkowskich (właściwości)
    string name="Leosia";
    string surname;
    // deklaracja funkcji członkowskich (metoda)
    void showData(){
        cout<<"Imię";
    }
};

int main()
{
    setlocale(LC_CTYPE,"polish");
    Worker pracownik;
    cout << pracownik.name;
    pracownik.showData();
    return 0;
}
