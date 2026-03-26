#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tipodeposito;
    int opcao;
    printf("--- CAIXA ELETRONICO ---\n");
    printf("1 - CONSULTAR SALDO\n");
    printf("2 - REALIZAR SAQUE\n");
    printf("3 - REALIZAR DEPOSITO\n");
    printf("ESCOLHA UMA OPCAO:  ");
    scanf("%d", &opcao);

    switch(opcao){

    case 1:
    printf("\n");
    printf("VOCE ESCOLHEU : CONSULTAR SALDO");
    printf("\n");
    break;
    case 2:
    printf("\n");
    printf("VOCE ESCOLHEU : REALIZAR SAQUE");
    printf("\n");
    break;
    case 3:
    printf("\n");
    printf("VOCE ESCOLHEU : REALIZAR DEPOITO");
    printf("\n");
    printf("QUAL O TIPO DE DEPOSITO :");
    printf("\n");
    printf(" 1 - CONTA CORRENTE");
    printf("\n");
    printf("2 - CONTA POUPANCA");
    printf("\n");
    printf("DIGITE O TIPO DE DEPOSITO : ");
    printf("\n");
    scanf("%d", &tipodeposito);

    switch(tipodeposito){

    case 1:
    printf("\nDEPOSITO EM CONTA CORRENTE SELECIONADO\n");
    if(1==1){
        printf("realizar outra operação");
    }else{
        printf("&case1")
    }
    break;


    case 2:
    printf("\nDEPOSITO EM CONTA POUPANCA SELECIONADO\n");
    break;

    default:
        printf("TIPO DE TRANFERENCIA INVALIDA!");
        break;
    }
    break;
    default:
        printf("OPCAO NÃO INDENTIFICADA TENTE NOVAMENTE!");
    }
    return 0;
}
