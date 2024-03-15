#include <stdio.h>

int main() {
    int x;

    printf("Digite um valor inteiro X: ");
    scanf("%d", &x);

    printf("O triplo de %d é: %d\n", x, 3 * x);
    printf("O quadrado de %d é: %d\n", x, x * x);
    printf("A metade de %d é: %.1f\n", x, (float)x / 2);

    return 0;
}
