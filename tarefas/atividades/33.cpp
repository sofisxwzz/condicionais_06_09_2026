#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, novoPreco;

    printf("Digite o preco antigo: ");
    scanf("%f", &preco);

    if(preco <= 50)
        novoPreco = preco * 1.05;
    else if(preco <= 100)
        novoPreco = preco * 1.10;
    else
        novoPreco = preco * 1.15;

    printf("Novo preco: %.2f\n", novoPreco);

    if(novoPreco <= 80)
        printf("Barato.");
    else if(novoPreco <= 120)
        printf("Normal.");
    else if(novoPreco <= 200)
        printf("Caro.");
    else
        printf("Muito caro.");

    return 0;
}
