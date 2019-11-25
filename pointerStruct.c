#include <stdio.h>

typedef struct
{
	int age;
	char *name;
}playerStruct;

void playerSetup()
{
	playerStruct player;
	player.age = 40;
	player.name = "bryan";
}

int main(){
	playerStruct player;
	
	player.age = 40;
	player.name = "bryan";

	printf("%s age is %d\n", player.name, player.age);

	playerStruct *emPtr = &player;

	emPtr->age = 29;
	emPtr->name = "cherry";

	printf("player name is now, %s and age is now, %d\n", player.name, player.age);

	return 0;

}
