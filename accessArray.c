#include <stdio.h>

int main(){

	int a[2][3]={
		{3,2,6},
		{4,5,20}
	};

	printf("Element 3 in row 2 is %d\n", a[1][2]);
	a[1][2]=25;
	printf("After doing a[1][2]=25, elemen 3 in row 2 is now %d\n", a[1][2]);


	int aRow, aCol;

	for(aRow=0;aRow<2;aRow++){
		printf("Row %d\n", aRow+1);
		for(aCol=0;aCol<3;aCol++){
			printf("%d\n", a[aRow][aCol]);
		}
		printf("\n");

	}

	return 0;
}
