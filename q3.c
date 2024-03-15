#include <stdio.h>

int main() {
    float valor;

    printf("Digite um valor real: ");
    scanf("%f", &valor);

    printf("O valor com uma casa decimal é: %.1f\n", valor);

    return 0;
}
