#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[])
{
	printf("Hello %s", name);
}

int main()
{
	sayHi("Bryan");
	return 0;
}

