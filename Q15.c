#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n ;
    printf("Nota (0-10): ");
    scanf("%d", &n);
    switch(n){
        case 10: case 9:printf("Conceito A\n"); break;
        case 8: case 7 :printf("Conceito B\n"); break;
        case 6:  printf("Conceito C\n"); break;
        case 5: case 4: printf("Conceito D");break;
        default: printf("Conceito E\n");
    }
    return 0;
}
