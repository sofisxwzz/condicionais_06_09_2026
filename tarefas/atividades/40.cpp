#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, distribuidor, imposto, consumidor;

    printf("Digite o preco de fabrica: ");
    scanf("%f", &preco);

    if(preco <= 12000)
    {
        distribuidor = preco * 0.05;
        imposto = 0;
    }
    else if(preco <= 25000)
    {
        distribuidor = preco * 0.10;
        imposto = preco * 0.15;
    }
    else
    {
        distribuidor = preco * 0.15;
        imposto = preco * 0.20;
    }

    consumidor = preco + distribuidor + imposto;

    printf("Preco ao consumidor: %.2f", consumidor);

    return 0;
}
