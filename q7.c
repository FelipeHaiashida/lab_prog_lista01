#include <stdio.h>

int main() {
    int horas, minutos, segundos, totalSegundos;

    printf("Digite as horas, minutos e segundos separados por espaços: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    totalSegundos = horas * 3600 + minutos * 60 + segundos;

    printf("O total de segundos é: %d\n", totalSegundos);

    return 0;
}
