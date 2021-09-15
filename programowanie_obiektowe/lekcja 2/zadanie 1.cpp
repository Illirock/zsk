#include <iostream>

using namespace std;

class Rectangle {
    public:
    float width;
    float height;
    float showArea();
    float showPerimeter();
    void showAll();

    };
    float Rectangle::showArea(){
        return width * height;
    };
    float Rectangle::showPerimeter(){
         return 2 * width + 2 * height;
    };
    void Rectangle::showAll(){
        cout << "Dlugosc: " << height << "\nSzerokosc: " << width << "\nPole: " << Rectangle::showArea() << "\nObwod: " << Rectangle::showPerimeter();
    }
int main()
{
    Rectangle prostokat;
    cout << "Podaj dlugosc prostokata: " << endl;
    cin >> prostokat.height;
    cout << "Podaj szerokosc prostokata: " << endl;
    cin >> prostokat.width;

    prostokat.showAll();
}
