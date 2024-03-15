#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int resto = numero % 2;

    printf("%d é %s.\n", numero, resto == 0 ? "par" : "ímpar");

    return 0;
}
