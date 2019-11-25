#include <stdio.h>
#include <stdint.h>

int main(){
	int8_t num;

	printf("Enter a number: ");
	scanf("%d", &num);
	printf("You entered %d\n", num);
	printf("%d is at memory address %x\n", num, &num);

	num = 1;
	printf("the value of num at addres %x is now %d\n", &num, num);
	return 0;
}
