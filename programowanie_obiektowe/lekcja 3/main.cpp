#include <iostream>

using namespace std;

class School
{
    public:
    static string s_school;
    static string s_jobPosition;

    string name;
    string surname;

    void getData();
    void setNameSurname(string name, string surname);

    static string s_getSchool();
    static void s_setSchool(string pSchool)
    {
        s_school=pSchool;
    }
};

string School::s_school="ZSK";
string School::s_jobPosition="Cesarz";

void School::getData()
{
    cout<<"Imiê i Nazwisko: "<<name<<" "<<surname<<endl;
}
void School::setNameSurname(string name, string pSurname)
{
School::name=name;
surname=pSurname;
}

string School::s_getSchool()
{
    return s_school;
}

int main(int argc, char** argv)
{
setlocale(LC_CTYPE, "polish");
cout<<School::s_school<<endl;
cout<<School::s_jobPosition<<endl;

School szklanki;
szklanki.setNameSurname("M³oda", "Leokadia");
szklanki.getData();

School::s_jobPosition="Bogini"
cout<<"Stanowisko: "<<School::s_jobPosition<<endl;
cout<<szklanki.s_jobPosition<<endl;

szklanki.s_jobPosition="DJ";
cout<<School::s_jobPosition;

szklanki.s_getSchool();
szklanki.s_setSchool("ZS£");
cout<<szklanki.s_getSchool();
}
