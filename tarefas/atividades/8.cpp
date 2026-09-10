#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;

    printf("Digite duas notas: ");
    scanf("%f %f", &n1, &n2);

    if(n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10)
    {
        media = (n1 + n2) / 2;
        printf("Media: %.2f", media);
    }
    else
        printf("Notas invalidas.");

    return 0;
}
