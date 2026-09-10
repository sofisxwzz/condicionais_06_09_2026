#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5)
        printf("Abaixo do peso.");
    else if(imc < 25)
        printf("Peso normal.");
    else if(imc < 30)
        printf("Sobrepeso.");
    else if(imc < 35)
        printf("Obesidade grau I.");
    else if(imc < 40)
        printf("Obesidade grau II.");
    else
        printf("Obesidade grau III.");

    return 0;
}
