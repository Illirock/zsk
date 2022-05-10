#include <iostream>

using namespace std;

class TablicaDoSortowania
{
    public:
        int tablica[9];
        void Sortowanie();
};

void TablicaDoSortowania::Sortowanie()
{
    int x;
    for(int i=0; i<9; i++ ){
        x=i;
        for(int j=i+1; j<9; j++ ){
            if(tablica[j] > tablica[x]){
                x=j;
            }
        }
        swap(tablica[x], tablica[i]);
    }
};

int main(){
    TablicaDoSortowania proba1;
    cout<<"Podaj wartosci do tablica"<<endl;
    for(int i=0; i<9; i++)
    {
        cin>>proba1.tablica[i];
    }
    proba1.Sortowanie();
    for(int j=0; j<9; j++)
    {
        cout<<proba1.tablica[j]<<", ";
    }

}
