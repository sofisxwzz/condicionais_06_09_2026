#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    if(n1 >= n2)
        printf("O maior ou igual e: %d", n1);
    else
        printf("O maior e: %d", n2);

    return 0;
}
