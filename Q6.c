#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short idade ;
    float altura;
    printf("Idade: ");
    scanf("%hd", &idade);
    printf("Altura (m):  ");
    scanf("%f", &altura);
    printf("Voce tem %hd anos e %.2f m de altura.\n",idade , altura);
    return 0;
}
