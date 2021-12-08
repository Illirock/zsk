#include <iostream>

using namespace std;

//klasa bazowa
class Worker
{
	public:
		string name {""};
		string surname {""};
		string getData()
		{
			return name + " " + surname + "\n";
		}
};
//klasa pochodna
class Teacher: public Worker
{
	public:
	string classesAtSchool {""};
	string getData()
	{
		return name + " " + surname + " " + classesAtSchool + "\n";	
	}	
};
class SupervisingTeacher: public Teacher
{
	public: 
	static string supervisingClass;
	string getData()
	{
		return name + " " + surname + " " + classesAtSchool + " " + supervisingClass +"\n";	
	}	
};

string SupervisingTeacher::supervisingClass = "2e";
		
};
int main()
{
	setlocale(LC_CTYPE, "polish");	
	Teacher nowak;
	nowak.name = "Marek";
	nowak.surname = "Pawlak";
	nowak.classesAtSchool = "PO";
	cout<<"Dane nauczyciela:"<<nowak.getData()<<endl;
}
