#include <iostream>
#include <fstream>

using namespace std;

int main()
{	
	ifstream file;
	file.open("liczymy.txt", ios::in);
	
	int tab[5];
	bool fileOpen = false;
	
	if(file.is_open()){
		cout<<"Ilosc elementow w tablicy: "<<sizeof(tab)/sizeof(int)<<endl;
		for(int i=0; i<sizeof(tab)/sizeof(int);++i){
			file >> tab[i];
		}
		file.close();
		fileOpen = true;
	}
	else{
		cout<<"Otwarcie pliku nie udalo sie"<<endl;
		fileOpen = false;
	}
	if(fileOpen){
		for(int j=0; j<sizeof(tab)/sizeof(int);++j){
			cout<<tab[j]<<", ";
		}
		cout<<endl;
	}
	else{
		cout<<"Tablica nie zostala uzupelniona"<<endl;
	}
}
