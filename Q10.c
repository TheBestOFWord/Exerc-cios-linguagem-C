#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double n1, n2, media;
    printf("Notas: ");
    scanf("%lf %lf", &n1, &n2);
    media = (n1 + n2)/2.0;
    if(media >= 6.0){
        printf("aprovado (media = %.2f)\n", media);
    }else{
        printf("reprovado (media = %.2f)", media);
    }
    return 0;
}
