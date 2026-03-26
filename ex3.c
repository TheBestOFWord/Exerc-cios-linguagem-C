#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;
    scanf("%d", &num);
    printf("O número digitado foi: %d\n", num);
    return 0;
}
