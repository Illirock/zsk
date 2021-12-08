#include <iostream>

using namespace std;

class Cook
{
	public:
	string name {""};
	string surname {""};
	
	string getData()
	{
		return name + " " + surname + "\n";
	}
};
class Cuisine: public Cook
{
	public:
	string cusineSpecialization {""};
	
	string getData()
	{
		return name + " " + surname + "\nKuchnia: "+ cusineSpecialization + "\n";
	}	
};
class Dish : public Cuisine
{
	public:
	string dish {""};
	
	string getData()
	{
		return name + " " + surname + "\nKuchnia: "+ cusineSpecialization + "\nPotrawa: " + dish + "\n";
	}
};

int main()
{
	setlocale(LC_CTYPE, "polish");
	
	Dish danie;
	danie.name = "Franek";
	danie.surname = "Wozniak";
	danie.cusineSpecialization = "Francuska";
	danie.dish = "Escargots";
	cout<<danie.getData()<<endl;
	
	Cuisine kuchnia;
	kuchnia.name = "Mateusz";
	kuchnia.surname = "Przybylski";
	kuchnia.cusineSpecialization = "Polska";
	cout<<kuchnia.getData()<<endl;
	
	Cook kucharz;
	kucharz.name = "Patryk";
	kucharz.surname = "Mendelewski";
	cout<<kucharz.getData()<<endl;
}
