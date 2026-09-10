#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float a, b, c, media;

    printf("Digite tres numeros positivos: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("1 - Media geometrica\n");
    printf("2 - Media ponderada\n");
    printf("3 - Media harmonica\n");
    printf("4 - Media aritmetica\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if(a > 0 && b > 0 && c > 0)
    {
        if(opcao == 1)
            media = pow(a * b * c, 1.0 / 3.0);
        else if(opcao == 2)
            media = (a + 2 * b + 3 * c) / 6;
        else if(opcao == 3)
            media = 3 / ((1 / a) + (1 / b) + (1 / c));
        else if(opcao == 4)
            media = (a + b + c) / 3;
        else
        {
            printf("Opcao invalida.");
            return 0;
        }

        printf("Media: %.2f", media);
    }
    else
        printf("Os numeros devem ser positivos.");

    return 0;
}
