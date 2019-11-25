#include <stdio.h>

void* square(const void*);

int main(){
	int x, sq_int;
	x = 6;
	sq_int = square(&x);
	printf("%d squared is %d\n", x, sq_int);

	return 0;
}

void* square(const void *){
	int result;
	result = (*(int *)num) * (*(int *)num);
	return result;
}
