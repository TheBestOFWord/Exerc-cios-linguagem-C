#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double total = 0.0, v = -1.0;
    printf("valores (0 encerra): \n");
    while(v != 0.0){
        scanf("%lf", &v);
        total += v;
    }
    printf("Total : %.2f\n", total);
    return 0;
}
