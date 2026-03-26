#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Bem-vindo %s\n", nome);
    return 0;
}
