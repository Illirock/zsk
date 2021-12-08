#include <iostream>

using namespace std;

class Client{
	private:
	unsigned int pesel {0000000};
	double balance{0};

	public:
	Client();
	Client(unsigned int pPesel, double pBalance);
    ~Client();

	void getData();
	void setData();
};

Client::Client()
{
    cout<<"Witaj :D\n"<<endl;
}
Client::Client(unsigned int pPesel, double pBalance):
	pesel {pPesel},
	balance {pBalance}
	{
    cout<<"Lista Inicjalizacyjna"<<endl;
	}
Client::~Client()
{
    cout<<"Do zobaczenia"<<endl;
}

void Client::getData()
{
    cout<<"Klient banku o peselu "<<pesel<<" posiada "<<balance<<" z³\n"<<endl;
}
void Client::setData()
{
    pesel=4747474;
    balance=10000;
}
void getData(unsigned int p, double b)
{
    cout<<"Klient banku o peselu "<<p<<" posiada "<<b<<" z³"<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
    unsigned int p = 2121212;
    double b = 2137;

    Client texas;
    texas.getData();
    Client mietek(1717171, 21215);
    mietek.getData();
    getData(p, b);

	return 0;
}
