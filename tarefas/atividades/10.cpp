#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite M para masculino ou F para feminino: ");
    scanf(" %c", &sexo);

    if(sexo == 'M' || sexo == 'm')
    {
        peso = (72.7 * altura) - 58;
        printf("Peso ideal: %.2f", peso);
    }
    else if(sexo == 'F' || sexo == 'f')
    {
        peso = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2f", peso);
    }
    else
        printf("Sexo invalido.");

    return 0;
}
