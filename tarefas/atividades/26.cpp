#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    if(consumo < 8)
        printf("Venda o carro!");
    else if(consumo <= 14)
        printf("Economico!");
    else
        printf("Super economico!");

    return 0;
}
