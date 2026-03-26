#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, soma=0;
    printf("N: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)soma += i;
    printf("soma = %d\n", soma);
    return 0;
}
