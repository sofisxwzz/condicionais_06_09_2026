#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2)
        printf("O maior e: %d", n1);
    else if(n2 > n1)
        printf("O maior e: %d", n2);
    else
        printf("Os dois numeros sao iguais.");

    return 0;
}
