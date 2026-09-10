#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if(ano % 400 == 0)
        printf("Ano bissexto.");
    else if(ano % 4 == 0 && ano % 100 != 0)
        printf("Ano bissexto.");
    else
        printf("Nao e ano bissexto.");

    return 0;
}
