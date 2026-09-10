#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, resposta, resultado;

    srand(time(NULL));

    a = rand() % 10;
    b = rand() % 10;

    resultado = a + b;

    printf("Quanto e %d + %d? ", a, b);
    scanf("%d", &resposta);

    if(resposta == resultado)
        printf("Resposta correta!");
    else
        printf("Resposta errada. O resultado era %d.", resultado);

    return 0;
}
