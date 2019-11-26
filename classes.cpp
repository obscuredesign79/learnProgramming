#include <iostream>
using namespace std;

class Book
{
	public:
		string title;
		string author;
		int pages;
};
int main()
{
	Book book1;
	book1.title = "Stand, The";
	book1.author = "Stephen Kings";
	book1.pages = 1024;

	Book book2;
	book2.title = "Lord of the Rings";
	book2.author = "J.R.R Tolkien";
	book2.pages = 2000;

	cout << book2.title;

	return 0;
}
