#include <stdio.h>

int main(){
    int a = 6;
    int b = 4;
    int c = 2;
    int result;

    result = a - b + c;
    printf("%d\n", result);
    
    result = a + b / c;
    printf("%d\n", result);

    result = (a + b) / c;
    printf("%d\n", result);

    return 0;
}
