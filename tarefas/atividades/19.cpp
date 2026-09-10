#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if((n % 3 == 0 && n % 5 != 0) || (n % 5 == 0 && n % 3 != 0))
        printf("O numero e divisivel por 3 ou 5, mas nao pelos dois.");
    else
        printf("O numero nao atende a condicao.");

    return 0;
}
