#include <iostream>
using namespace std;

struct Date {
	int d, m, y;
};

class Car {
	public:
		int id=10;
		string brand="Fiat", model="126p";

		void getData();

		Car(int pId=13, string="FIAT", string="XXXX");
};

Car::Car(int pId,string pBrand, string pModel) {
    id = pId;
	brand = pBrand;
	model = pModel;
}

void Car::getData() {
	cout << "\nID: " << id << "\nMarka: " << brand << "\nModel: " << model << endl;
}

int main() {
	setlocale(LC_CTYPE, "polish");
	Car ferrari(8,"Ferrari", "F430");
	ferrari.getData();

	Car opel = Car(9,"Opel","Astra");
	opel.getData();

    Car bmw;
    bmw.getData();
}
