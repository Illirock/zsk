#include <iostream>

using namespace std;

class Rectangle{
	private:
	double sideA{0};
	double sideB{0};

	public:
	Rectangle();
	Rectangle(double pA, double pB);

	void getData();
	void setData();
};

Rectangle::Rectangle(){};
Rectangle::Rectangle(double pA, double pB):
	sideA{pA},
	sideB{pB}
	{

	}

void Rectangle::getData(){
	cout<<"Bok A: "<<sideA<<endl;
	cout<<"Bok B: "<<sideB<<endl;
}
void Rectangle::setData(){
	sideA=10;
	sideB=30;
}
void getData(double a, double b){
	cout<<"Bok A: "<<a<<endl;
	cout<<"Bok B: "<<b<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	double a=10;
	double b=20;

	Rectangle p1;
	p1.getData();
	p1.setData();
	p1.getData();
	return 0;
}
