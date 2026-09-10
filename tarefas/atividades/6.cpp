#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, diferenca;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2)
    {
        diferenca = n1 - n2;
        printf("Maior: %d\n", n1);
        printf("Diferenca: %d", diferenca);
    }
    else if(n2 > n1)
    {
        diferenca = n2 - n1;
        printf("Maior: %d\n", n2);
        printf("Diferenca: %d", diferenca);
    }
    else
        printf("Os numeros sao iguais.");

    return 0;
}
