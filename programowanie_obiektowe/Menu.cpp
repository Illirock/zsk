#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void totolotek(){
	int array[6], lottery[6], win=0;
	srand(time(NULL));
	cout<<"Podaj twoje liczby do kumulacji"<<endl;
	for(int i=0; i<6; i++){
		cin>>array[i];
	}
	cout<<"Liczby kumulacji: "<<endl;
	for(int j=0; j<6; j++){
		lottery[j] = 1+rand()%(49-1+1);
		cout<<"\n"<<lottery[j]<<", ";
	}
	for(int k=0; k<6; k++){
		if(lottery[k]==array[k]){
			win++;	
		}
	}
	cout<<"\n\nTrafiles "<<win<<" liczb"<<endl;
}
void kolor(){
		string color;
		cout<<"Jaki jest twoj ulubiony kolor?"<<endl;
		cin>>color;
		cout<<"Twoj ulubiony kolor to : "<<color<<endl;
}

int main()
{
	bool menu = true;
	int x;
	while(menu)
	{
		cout<<"\nMenu\n0.Wyjscie\n1.Totolotek\n2.Ulubiony kolor"<<endl;
		cin>>x;
		switch(x){
			case 0:
				menu = false;
				break;
			case 1:
				totolotek();
				break;
			case 2:
				kolor();
				break;
			default:
				cout<<"Error: podaj poprawna liczbe!"<<endl;
				break;
		}
	}
	cout<<"\nDo widzenia :D"<<endl;
}

