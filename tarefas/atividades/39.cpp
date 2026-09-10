#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, reajuste, novoSalario, bonus;
    int anos;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite os anos de empresa: ");
    scanf("%d", &anos);

    if(salario <= 500)
        reajuste = salario * 0.25;
    else if(salario <= 1000)
        reajuste = salario * 0.20;
    else if(salario <= 1500)
        reajuste = salario * 0.15;
    else if(salario <= 2000)
        reajuste = salario * 0.20;
    else
        reajuste = 0;

    if(anos < 1)
        bonus = 0;
    else if(anos <= 3)
        bonus = 100;
    else if(anos <= 6)
        bonus = 200;
    else if(anos <= 10)
        bonus = 300;
    else
        bonus = 500;

    novoSalario = salario + reajuste + bonus;

    printf("Reajuste: %.2f\n", reajuste);
    printf("Bonus: %.2f\n", bonus);
    printf("Novo salario: %.2f", novoSalario);

    return 0;
}
