#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite dois números inteiros separados por espaços: ");
    scanf("%d %d", &numero1, &numero2);

    printf("Soma: %d\n", numero1 + numero2);
    printf("Produto: %d\n", numero1 * numero2);
    printf("Diferença: %d\n", numero1 - numero2);
    printf("Quociente: %d\n", numero1 / numero2);
    printf("Resto: %d\n", numero1 % numero2);

    return 0;
}
