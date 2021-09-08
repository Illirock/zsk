#include <iostream>

using namespace std;

class Worker {
    public:
// deklaracja zmiennych cz³onkowskich (w³aœciwoœci)
    string name="Leosia";
    string surname;
    // deklaracja funkcji cz³onkowskich (metoda)
    void showData(){
        cout<<"Imiê";
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
