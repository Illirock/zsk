#include <iostream>
using namespace std;

class Book {
    string title, author;

    void getTitle();
    void getAuthor();
    string setAuthor(string pAuthor);
    Book(string title="Nieznany", string author="Nieznany");
};
Book::getAuthor()
{
    cout<<"Autor: "<<author<<endl;
}
Book::getTitle()
{
    cout<<"Tytu³: "<<title<<endl;
}
Book::setAuthor(string pAuthor)
{
    author=pAuthor;
}
int main() {
	setlocale(LC_CTYPE, "polish");
	Book ksi¹¿ka(Biblia, Jezus);
	ksi¹¿ka.getTitle();
	ksi¹¿ka.getAuthor();
}
