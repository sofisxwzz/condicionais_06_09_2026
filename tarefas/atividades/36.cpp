#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vendas, comissao;

    printf("Digite o valor das vendas: ");
    scanf("%f", &vendas);

    if(vendas >= 100000)
        comissao = 700 + vendas * 0.16;
    else if(vendas >= 80000)
        comissao = 650 + vendas * 0.14;
    else if(vendas >= 60000)
        comissao = 600 + vendas * 0.14;
    else if(vendas >= 40000)
        comissao = 550 + vendas * 0.14;
    else if(vendas >= 20000)
        comissao = 500 + vendas * 0.14;
    else
        comissao = 400 + vendas * 0.14;

    printf("Comissao: %.2f", comissao);

    return 0;
}
