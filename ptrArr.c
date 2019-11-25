#include <stdio.h>
#include <stdint.h>

int main(){
	uint8_t a[5] = {22,33,44,55,66};
	uint8_t *p = NULL;
	uint8_t i;

	p = a;
	for(i=0;i<5;i++){
		printf("%d", *(p + i));
	}
	printf("\n");

	for(i=0;i<5;i++){
		printf("value a: %d memory location a: %x\n", a[i], &a[i]);
	}
	
	for(i=0;i<5;i++){
		printf("value pointer: %d memory location pointer: %x\n", *(p + i), &p + i);
	}
	return 0;
}
