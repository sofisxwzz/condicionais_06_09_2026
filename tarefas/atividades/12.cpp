#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if(n > 0)
        printf("Logaritmo: %.2f", log(n));
    else
        printf("Nao e possivel calcular o logaritmo.");

    return 0;
}
