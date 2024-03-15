#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3;
    float media_aritmetica, media_geometrica;

    printf("Digite três números em ponto flutuante separados por espaços: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    media_aritmetica = (num1 + num2 + num3) / 3.0;

    media_geometrica = pow((num1 * num2 * num3), 1.0 / 3.0);

    printf("A média aritmética dos três números é: %.2f\n", media_aritmetica);
    printf("A média geométrica dos três números é: %.2f\n", media_geometrica);

    return 0;
}
