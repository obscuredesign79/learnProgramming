#include <stdio.h>

typedef struct 
{
	int x, y;
	short life;
	char *name;
}playerStruct;



int main() {

/* void giveMeThings(int xVal, int *yRef,
   						SomeStruct value,
						SomeStruct *ref,
						int arrayRef[],
						int *arrayRef2)
*/

	//declare a pointer
	playerStruct player;

	player.x = 50;
	player.y = 50;
	player.life = 100;
	player.name = "bryan";

	printf("player name: %s\n", player.name);
	
	return 0;
}
