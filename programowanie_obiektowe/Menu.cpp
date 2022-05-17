#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	bool menu = true;
	string color;
	int x;
	int array[6];
	int rng;
	while(menu)
	{
		cout<<"\nMenu\n0.Wyjscie\n1.Totolotek\n2.Ulubiony kolor"<<endl;
		cin>>x;
		switch(x)
		{
			case 0:
				menu = false;
				break;
			case 1:
				srand(time(NULL));
				cout<<"Podaj wartosci do kumulacji"<<endl;
			    for(int i=0; i<6; i++)
			    {
			        cin>>array[i];
			    }
			    rng = 0+rand()%(5-0+1);
			    cout<<"Wygrywa liczba: "<<array[rng]<<endl;
				break;
			case 2:
				cout<<"Jaki jest twoj ulubiony kolor?"<<endl;
				cin>>color;
				cout<<"Twoj ulubiony kolor to : "<<color<<endl;
				break;
			default:
				cout<<"Error: podaj poprawna liczbe!"<<endl;
				break;
		}
	}
	cout<<"Do widzenia :D"<<endl;
}

