#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if(nota >= 9)
        conceito = 'A';
    else if(nota >= 7.5)
        conceito = 'B';
    else if(nota >= 5)
        conceito = 'C';
    else if(nota >= 4)
        conceito = 'D';
    else
        conceito = 'E';

    if(faltas > 20)
    {
        if(conceito == 'A')
            conceito = 'B';
        else if(conceito == 'B')
            conceito = 'C';
        else if(conceito == 'C')
            conceito = 'D';
        else if(conceito == 'D')
            conceito = 'E';
    }

    printf("Conceito: %c", conceito);

    return 0;
}
