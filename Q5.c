#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    char nome [50];
    printf("Digite seu nome:  ");
    fgets(nome, sizeof(nome), stdin);
    printf("Bem-vindo(a), %s", nome);
    return 0;
}
