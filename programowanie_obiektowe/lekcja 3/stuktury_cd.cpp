#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;	
};

class Worker {
	public:
		unsigned int id {};
		string name {}, surname {};
		Date dateBirthday {};
		
		void showAllData();
		void setData(unsigned int id);
};

void Worker::showAllData(){
	cout<<"Dane pracownika\nIdentyfikator pracownika: "<<id
			<<"\nImiê i nazwisko: "<<name<<" "<<surname
			<<"\nData urodzenia: "<<dateBirthday.dd<<"-"
			<<dateBirthday.mm<<"-"<<dateBirthday.yyyy<<endl;
};

void Worker::setData(unsigned int id){
	Worker::id=id;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
	kowalski.setData(10);
	kowalski.showAllData();
	return 0;
}
