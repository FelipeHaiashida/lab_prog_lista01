#include <stdio.h>

int main() {
    int numero, quadrado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;

    printf("O quadrado de %d é: %d\n", numero, quadrado);

    return 0;
}
