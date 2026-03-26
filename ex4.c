#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int valor;
    scanf("%d", &valor);
    printf("O valor oposto é: %d\n", !valor);
    return 0;
}
