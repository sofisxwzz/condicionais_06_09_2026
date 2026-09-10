#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    soma = (n / 100) + ((n / 10) % 10) + (n % 10);

    if(n > 0)
        printf("Soma dos algarismos: %d", soma);
    else
        printf("Numero invalido.");

    return 0;
}
