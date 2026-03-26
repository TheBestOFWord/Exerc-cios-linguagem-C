#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short idade;
    printf("Idade: ");
    scanf("%hd", &idade);
    if(idade >= 18){
        printf("maior de idade");
    }else{
        printf("menor de idade");
    }
    return 0;
}
