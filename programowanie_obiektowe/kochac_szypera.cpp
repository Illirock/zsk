#include <iostream>

using namespace std;

class c1
{
    int a,b,c;
    virtual void f()
    {
        cout<<"funkcja"<<endl;
    }
};
class c2
{
  int a,b,c;
  void f2()
  {
        cout<<"funkcja"<<endl;
  }
};
class c3
{
  int a,b,c;
  void f1()
  {
        cout<<"funkcja"<<endl;
  }
  void f2()
  {
        cout<<"funkcja"<<endl;
  }
  void f3()
  {
        cout<<"funkcja"<<endl;
  }
};
int main()
{
    c1 *wsk1 = new c1;
    cout<<sizeof(wsk1)<<endl;//4
    c2 *wsk2 = new c2;
    cout<<sizeof(wsk2)<<endl;//4
    c3 *wsk3 = new c3;
    cout<<sizeof(wsk3)<<endl;//4

    cout<<"Ten typ danych zajmuje: "<<sizeof(int)<<" bajtow"<<endl;
    cout<<"Ten typ danych zajmuje: "<<sizeof(char)<<" bajtow"<<endl;
    cout<<"Ten typ danych zajmuje: "<<sizeof(string)<<" bajtow"<<endl;
    cout<<"Ten typ danych zajmuje: "<<sizeof(float)<<" bajtow"<<endl;
    cout<<"Ten typ danych zajmuje: "<<sizeof(double)<<" bajtow"<<endl;
    cout<<"Ten typ danych zajmuje: "<<sizeof(bool)<<" bajtow"<<endl;

}
