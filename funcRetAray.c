#include <stdio.h>

int *getEvens();

int main(){

	int *a;
	int k;

	a=getEvens();

	for(k=0;k<5;k++)
		printf("%d\n",a[k]);

	return 0;
}

int *getEvens(){
	static int nums[5];
	int k;
	int even=0;

	for(k=0;k<5;k++){

		nums[k]=even+=2;
	}

	return(nums);
}
