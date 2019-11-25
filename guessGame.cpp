#include <iostream>
using namespace std;

int main()
{
	int secretNum = 7;
	int guess;
	int guessCount;
	int guessLimit = 3;
	bool outOfGuesses = false;

	do
	{

		if(guessCount < guessLimit)
		{
			cout << "Enter a guess: ";
			cin >> guess;
			guessCount++;
		}
		else
		{
			outOfGuesses = true;
		}

	}	
	while(secretNum != guess && !outOfGuesses);

	if(outOfGuesses)
	{
		cout << "You lose!";
	}
	else
	{
		cout << "You win!";
	}
	return 0;
}
