#include <iostream>

using namespace std;

class Worker {
    public:
// deklaracja zmiennych cz�onkowskich (w�a�ciwo�ci)
    string name="Leosia";
    string surname;
    // deklaracja funkcji cz�onkowskich (metoda)
    void showData(){
        cout<<"Imi�";
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
