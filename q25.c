#include <stdio.h>

int main() {
    int tempo_em_segundos, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo_em_segundos);

    horas = tempo_em_segundos / 3600;
    minutos = (tempo_em_segundos % 3600) / 60;
    segundos = (tempo_em_segundos % 3600) % 60;

    printf("Tempo: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);

    return 0;
}
