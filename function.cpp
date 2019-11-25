#include <iostream>

using namespace std;

void sayHi(string name, int age)
{
	cout << "Hello " << name << "You are" << age << endl;
}

int main()
{
	sayHi("Bryan", 40);
	sayHi("Cherry", 29);
	return 0;
}
