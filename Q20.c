#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Quantitade de leitura: ");
    scanf("%d", &n);
    float soma = 0.0f, x;
    for(int i=0;i<n;i++){
        scanf("%f", &x);
        soma += x;
    }
    printf("Media = %.3f\n", (n>0? soma/n : 0.0f));
    return 0;
}
