#include <stdio.h>

int main(){

	int a[10];
	int count;

	for(count=0;count<10;count++){
		a[count]=count*10;
	}

	for(count=0;count<10;count++){
		printf("a[%i]=%i\n",count,a[count]);
	}

	return 0;
}

