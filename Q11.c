#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long x ;
    printf("numero(long): ");
    scanf("%ld", &x);
    if(x % 2 == 0){
        printf("%ld eh par.\n", x);
    }else{
        printf("ld eh impar.\n", x);
    }
    return 0;
}
