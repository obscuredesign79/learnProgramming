#include <stdio.h>

int sumUp(int x, int y);

int main(){
	int x, y, result;

	x = 3;
	y = 12;
	result = sumUp(x, y);
	printf("%d + %d = %d\n", x, y, result);

	return 0;
}

int sumUp(int x, int y){
	x += y;
	return(x);
}
