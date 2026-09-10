#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano, diasMes;

    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);

    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    if(mes < 1 || mes > 12)
        printf("Data invalida.");
    else
    {
        if(mes == 2)
        {
            if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
                diasMes = 29;
            else
                diasMes = 28;
        }
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
            diasMes = 30;
        else
            diasMes = 31;

        if(dia >= 1 && dia <= diasMes && ano <= 2008)
            printf("Data de nascimento valida.");
        else
            printf("Data invalida.");
    }

    return 0;
}
