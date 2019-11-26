#include <iostream>
using namespace std;
/*
   cout << "Age: " << &age << endl;
   cout << "Gpa: " << &gpa << endl;
   cout << "Name: " << &name << endl;
 */

int main()
{

	int age = 19;
	int *ptrAge = &age;
	double gpa = 2.7;
	double *ptrGpa = &gpa;
	string name = "Mike";
	string *ptrName = &name;

	cout << *ptrAge;

   return 0;
}
