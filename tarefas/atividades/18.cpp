#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float n1, n2;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    if(opcao == 1)
        printf("Resultado: %.2f", n1 + n2);
    else if(opcao == 2)
        printf("Resultado: %.2f", n1 - n2);
    else if(opcao == 3)
        printf("Resultado: %.2f", n1 * n2);
    else if(opcao == 4)
    {
        if(n2 != 0)
            printf("Resultado: %.2f", n1 / n2);
        else
            printf("Nao e possivel dividir por zero.");
    }
    else
        printf("Opcao invalida.");

    return 0;
}
