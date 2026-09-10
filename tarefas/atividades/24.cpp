#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, final;
    char estado[3];

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a sigla do estado: ");
    scanf("%2s", estado);

    if(estado[0] == 'M' && estado[1] == 'G')
        final = preco * 1.07;
    else if(estado[0] == 'S' && estado[1] == 'P')
        final = preco * 1.12;
    else if(estado[0] == 'R' && estado[1] == 'J')
        final = preco * 1.15;
    else if(estado[0] == 'M' && estado[1] == 'S')
        final = preco * 1.08;
    else
    {
        printf("Estado invalido.");
        return 0;
    }

    printf("Preco final: %.2f", final);

    return 0;
}
