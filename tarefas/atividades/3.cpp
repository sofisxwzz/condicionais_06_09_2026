#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if(n >= 0)
        printf("Raiz quadrada: %.2f", sqrt(n));
    else
        printf("Quadrado: %.2f", n * n);

    return 0;
}
