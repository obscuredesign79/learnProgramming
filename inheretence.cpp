#include <iostream>
using namespace std;

class Chef{
	public:
		void makeChicken(){
			cout << "The chef makes chicken" << endl;
		}
		void makeSalad(){
			cout << "The chef makes salad" << endl;
		}
		void makeSpecialDish(){
			cout << "The chef makes a bbq ribs" << endl;
		}
};

class ItalianChef : public Chef{
	public:
		void makePasta(){
			cout << "The chef makes pasta" << endl;
		}

};

int main()
{

	Chef chef;
	chef.makeChicken();

	ItalianChef italianChef;
	italianChef.makeChicken();
	italianChef.makePasta();
	return 0;

}
