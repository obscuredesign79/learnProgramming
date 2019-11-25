#include <stdio.h>

void doSomethingWithOperators(){
	int x = 2, y = 5;
	x += y;

	printf("Result is: %d\n", x);
}

int main(int argc, const char *argv[]){
	printf("***Welcome to my fucking program!***\n");

	doSomethingWithOperators();

	//wait for user to hit enter before quitting
	getchar();

	return 0;
}
