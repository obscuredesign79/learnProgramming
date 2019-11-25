#include <stdio.h>

int addUp(int *a, int numElements);

int main(){

	int orders[5]={100,220,37,16,98};

	printf("Total orders is %d\n", addUp(orders,5));

	return 0;
}

int addUp(int *a, int numElements){

	int total=0;
	int k;

	for(k=0;k<numElements;k++){

		total+=a[k];
	}
	return(total);
}
