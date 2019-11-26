#include <iostream>
using namespace std;

class Book
{
	public:
		string title;
		string author;
		int pages;
		Book(string aTitle, string aAuthor, int aPages)
		{
			title = aTitle;
			author = aAuthor;
			pages = aPages;
		}
};
int main()
{
	Book book1("Stand, The","Stephen Kings",1024);

	Book book2();
	book2.title = "Lord of the Rings";
	book2.author = "J.R.R Tolkien";
	book2.pages = 2000;


	return 0;
}
