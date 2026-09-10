#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;

    printf("Digite um numero positivo: ");
    scanf("%f", &n);

    if(n >= 0)
    {
        printf("Quadrado: %.2f\n", n * n);
        printf("Raiz quadrada: %.2f", sqrt(n));
    }
    else
        printf("Numero invalido.");

    return 0;
}
