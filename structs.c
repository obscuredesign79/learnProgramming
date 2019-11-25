#include <stdio.h>

struct playerStruct 
{
	int x, y;
	short life;
	char *name;
};

struct playerStruct player;

void playerSetup()
{
	player.x = 50;
	player.y = 50;
	player.life = 100;
	player.name = "bryan";
}

int main() 
{ 	

	playerSetup();
	printf("player1 position is x = %d, y = %d\n", player.x, player.y);

	return 0;
}
