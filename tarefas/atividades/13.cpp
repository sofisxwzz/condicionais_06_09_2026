#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media;

    printf("Digite tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3 * 2) / 4;

    if(media >= 60)
        printf("Aprovado. Media: %.2f", media);
    else
        printf("Reprovado. Media: %.2f", media);

    return 0;
}
