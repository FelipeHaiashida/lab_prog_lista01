#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    printf("Digite o comprimento, largura e altura da caixa separados por espaços: ");
    scanf("%f %f %f", &comprimento, &largura, &altura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa é: %.2f\n", volume);

    return 0;
}
