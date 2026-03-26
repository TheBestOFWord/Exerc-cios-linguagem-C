#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    printf("Olá aluno, hoje é sexta-feira\n");
    return 0;
}
