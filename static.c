#include <stdio.h>

void sayHello();

int main(){
	int i;

	for(i=0;i<5;i++){
		sayHello();
	}


	return 0;
}

void sayHello(){
	int numCalls = 1;

	printf("numCalls is %d\n", numCalls);

	printf("Hello number %d\n", numCalls);
	numCalls++;

}
