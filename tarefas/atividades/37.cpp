#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaEntrada, minutoEntrada;
    int horaSaida, minutoSaida;
    int entrada, saida, tempo, horas;
    float valor;

    printf("Hora de entrada: ");
    scanf("%d %d", &horaEntrada, &minutoEntrada);

    printf("Hora de saida: ");
    scanf("%d %d", &horaSaida, &minutoSaida);

    entrada = horaEntrada * 60 + minutoEntrada;
    saida = horaSaida * 60 + minutoSaida;

    if(saida < entrada)
        saida = saida + 24 * 60;

    tempo = saida - entrada;

    horas = tempo / 60;

    if(tempo % 60 != 0)
        horas++;

    if(horas <= 2)
        valor = horas * 1.00;
    else if(horas <= 4)
        valor = 2 * 1.00 + (horas - 2) * 1.40;
    else
        valor = 2 * 1.00 + 2 * 1.40 + (horas - 4) * 2.00;

    printf("Tempo: %d horas\n", horas);
    printf("Valor: %.2f", valor);

    return 0;
}
