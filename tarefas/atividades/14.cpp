#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lab, semestral, exame, media;

    printf("Nota do laboratorio: ");
    scanf("%f", &lab);

    printf("Nota semestral: ");
    scanf("%f", &semestral);

    printf("Nota do exame final: ");
    scanf("%f", &exame);

    media = (lab * 2 + semestral * 3 + exame * 5) / 10;

    if(media < 3)
        printf("Reprovado.");
    else if(media < 5)
        printf("Recuperacao.");
    else
        printf("Aprovado.");

    return 0;
}
