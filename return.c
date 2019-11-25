#include <stdio.h>

int doubleIt(int number){
	return number*2;
}

int halveIt(int number){
	return number/2;
}

int main(int argc, const char *argv[]){
	printf("*** Welcome to my program! ***\n");

	int x = 50;
	int go = 1;

	while(go)
	{
		x = halveIt(x);
			if(x < 2)
				go = 0;
		printf("Program result: %d\n", x);
	}
	return 0;
}
