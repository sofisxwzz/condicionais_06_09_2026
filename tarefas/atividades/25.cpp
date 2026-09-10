#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("Digite a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0)
        printf("Nao e uma equacao do segundo grau.");
    else
    {
        delta = b * b - 4 * a * c;

        if(delta < 0)
            printf("Nao possui raizes reais.");
        else if(delta == 0)
        {
            x1 = -b / (2 * a);
            printf("Uma raiz real: %.2f", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f", x2);
        }
    }

    return 0;
}
