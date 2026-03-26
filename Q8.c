#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a, b;
    printf("digite dois valores (double): ");
    scanf("%lf %lf", &a, &b);
    printf("Voce digitou : %.3f e %.3f\n", a, b);
    printf("soma = %.3f\n", a + b);
    return 0;
}
