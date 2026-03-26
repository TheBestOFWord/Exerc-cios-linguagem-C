#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short x; int i;
    printf("Numero (short): ");
    scanf("%hd", &x);
    for(i=1; i<=10; i++)printf("%hd x %d = %d\n", x, i, x*i);
    return 0;
}
