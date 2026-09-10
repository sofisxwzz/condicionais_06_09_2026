#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, tempo;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico: ");
    scanf("%d", &tempo);

    if(idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25))
        printf("Pode se aposentar.");
    else
        printf("Nao pode se aposentar.");

    return 0;
}
