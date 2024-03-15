#include <stdio.h>

int main() {
    int x, n;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int potencia_de_2 = 1 << n;

    int produto = x * potencia_de_2;

    printf("O produto de %d por 2 elevado a %d é: %d\n", x, n, produto);

    return 0;
}
