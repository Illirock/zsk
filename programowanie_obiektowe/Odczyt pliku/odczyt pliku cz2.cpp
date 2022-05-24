#include <iostream>
#include <fstream>

using namespace std;

int main()
{	
	ifstream file("liczby.txt");
	if(file){
		int tab[9];
		for(int i=0; i<9; ++i){
			file>>tab[i];	
		}
		for(int j=0; j<9; j++)
		{
			cout<<"tab ["<<j<<"]= "<<tab[j]<<endl;
		}
		file.close();
	}
	else{
		cout<<"Otwarcie pliku nie uda³lo sie"<<endl;
	}
}
