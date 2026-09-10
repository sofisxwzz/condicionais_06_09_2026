#include <stdio.h>
#include <stdlib.h>

int main()
{
    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior: ");
    scanf("%f", &baseMaior);

    printf("Digite a base menor: ");
    scanf("%f", &baseMenor);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if(baseMaior > 0 && baseMenor > 0 && altura > 0)
    {
        area = ((baseMaior + baseMenor) * altura) / 2;
        printf("Area: %.2f", area);
    }
    else
        printf("Valores invalidos.");

    return 0;
}
