#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois números inteiros separados por espaços: ");
    scanf("%d %d", &num1, &num2);

    int resto = num1 % num2;

    printf("%d %s múltiplo de %d.\n", num1, resto == 0 ? "é" : "não é", num2);

    return 0;
}
