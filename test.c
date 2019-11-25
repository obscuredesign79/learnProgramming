#include <stdio.h>

int main(){
	int moveX = 8;
	int posX;

	while(moveX!=0){

		posX = moveX < 0 ? -1 : 1;
		printf("posX = %d\n", posX);
		moveX += moveX < 0 ? 2 : -2;
		printf("moveX = %d\n", moveX);

	}

	printf("outside while loop\n");
		printf("posX = %d\n", posX);
		printf("moveX = %d\n", moveX);

}

