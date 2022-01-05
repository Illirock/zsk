#include <iostream>
#include <cmath>

using namespace std;

class Calculator
{
    public:

    double x,y;

    void add();
    void sub();
    void mul();
    void div();
    void power();
};

void Calculator::add()
{
    cout<<"\nResult: "<<x+y<<endl;
}
void Calculator::sub()
{
    cout<<"\nResult: "<<x-y<<endl;
}
void Calculator::mul()
{
    cout<<"\nResult: "<<x*y<<endl;
}
void Calculator::div()
{
    cout<<"\nResult: "<<x/y<<endl;
}
void Calculator::power()
{
    cout<<"\nResult: "<<pow(x,y)<<endl;
}

int main()
{
    setlocale(LC_CTYPE,"polish");
    Calculator kalkulator;

    unsigned short int a;
    do
    {
        cout<<"\n1) Addition\n2) Substraction\n3) Multiplication\n4) Division\n5) Power\n6) Exit"<<endl;
        cin>>a;
        while(cin.fail() || a<0 || a>6)
        {
            cout<<"Wprowadziles błędne dane"<<endl;
            cin.clear();
            cin.ignore(10,'\n');
            cout<<"Wprowadz dane ponownie:";
            cin>>a;
        }
        switch(a)
        {
            case 1:
                cout<<"\nPodaj pierwsz¹ liczbe:";
                cin>>kalkulator.x;
                while(cin.fail())
                {
                    cout<<"Wprowadziles b³êdne dane"<<endl;
                    cin.clear();
                    cin.ignore(10,'\n');
                    cout<<"Wprowadz dane ponownie:";
                    cin>>kalkulator.x;
                }
                cout<<"\nPodaj drug¹ liczbe:";
                cin>>kalkulator.y;
                while(cin.fail())
                {
                    cout<<"Wprowadziles b³êdne dane"<<endl;
                    cin.clear();
                    cin.ignore(10,'\n');
                    cout<<"Wprowadz dane ponownie:";
                    cin>>kalkulator.y;
                }
                kalkulator.add();
                break;

            case 2:
                cout<<"\nPodaj pierwsz¹ liczbe:";
                cin>>kalkulator.x;
                while(cin.fail())
                {
                    cout<<"Wprowadziles b³êdne dane"<<endl;
                    cin.clear();
                    cin.ignore(10,'\n');
                    cout<<"Wprowadz dane ponownie:";
                    cin>>kalkulator.x;
                }
                cout<<"\nPodaj drug¹ liczbe:";
                cin>>kalkulator.y;
                while(cin.fail())
                {
                    cout<<"Wprowadziles b³êdne dane"<<endl;
                    cin.clear();
                    cin.ignore(10,'\n');
                    cout<<"Wprowadz dane ponownie:";
                    cin>>kalkulator.y;
                }
                kalkulator.sub();
                break;

            case 3:
                cout<<"\nPodaj pierwsz¹ liczbe:";
                cin>>kalkulator.x;
                while(cin.fail())
                {
                    cout<<"Wprowadziles b³êdne dane"<<endl;
                    cin.clear();
                    cin.ignore(10,'\n');
                    cout<<"Wprowadz dane ponownie:";
                    cin>>kalkulator.x;
                }
                cout<<"\nPodaj drug¹ liczbe:";
                cin>>kalkulator.y;
                while(cin.fail())
                {
                    cout<<"Wprowadziles b³êdne dane"<<endl;
                    cin.clear();
                    cin.ignore(10,'\n');
                    cout<<"Wprowadz dane ponownie:";
                    cin>>kalkulator.y;
                }
                kalkulator.mul();
                break;

            case 4:
                cout<<"\nPodaj pierwsz¹ liczbe:";
                cin>>kalkulator.x;
                while(cin.fail())
                {
                    cout<<"Wprowadziles b³êdne dane"<<endl;
                    cin.clear();
                    cin.ignore(10,'\n');
                    cout<<"Wprowadz dane ponownie:";
                    cin>>kalkulator.x;
                }
                cout<<"\nPodaj drug¹ liczbe:";
                cin>>kalkulator.y;
                while(cin.fail())
                {
                    cout<<"Wprowadziles b³êdne dane"<<endl;
                    cin.clear();
                    cin.ignore(10,'\n');
                    cout<<"Wprowadz dane ponownie:";
                    cin>>kalkulator.y;
                }
                kalkulator.div();
                break;

            case 5:
                cout<<"\nPodaj liczbe:";
                cin>>kalkulator.x;
                while(cin.fail())
                {
                    cout<<"Wprowadziles b³êdne dane"<<endl;
                    cin.clear();
                    cin.ignore(10,'\n');
                    cout<<"Wprowadz dane ponownie:";
                    cin>>kalkulator.x;
                }
                cout<<"\nPodaj potęge:";
                cin>>kalkulator.y;
                while(cin.fail())
                {
                    cout<<"Wprowadziles b³êdne dane"<<endl;
                    cin.clear();
                    cin.ignore(10,'\n');
                    cout<<"Wprowadz dane ponownie:";
                    cin>>kalkulator.y;
                }
                kalkulator.power();
                break;
            default:
                break;
        }
    }
    while(a!=6);
}
