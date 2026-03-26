#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char cat;
    printf("Categoria (A/B/C): ");
    scanf("%c",&cat);
    printf("Categoria digitada: %c (ASCII %d)\n", cat, (int)cat);
    return 0;
}
