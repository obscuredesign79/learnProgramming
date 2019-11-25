#include <stdio.h>

int main(){
    int z = 3;
    int x = z++;
    printf("x = z++ is x = %d\n", x);
    printf("x is still, %d while z was 3 and after z++ is now, %d\n", x, z );

    int b = 3;
    int a = ++b;
    printf("a = ++b is a = %d", a);
}
