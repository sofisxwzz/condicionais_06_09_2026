#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, parcela;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o valor da parcela: ");
    scanf("%f", &parcela);

    if(parcela <= salario * 0.20)
        printf("Emprestimo concedido.");
    else
        printf("Emprestimo negado.");

    return 0;
}
