#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valor, desc = 0.0f;
    printf("Valor da compra: ");
    scanf("%f", &valor);
    if(valor >= 200.0f){
        desc = 0.15f;
    }else{
        if(valor >= 100.0f){
            desc = 0.10f;
            printf("desconto: %.0f%% | total: %.2f\n", desc*100, valor * (1.0f-desc));
        }
    }
    return 0;
}
