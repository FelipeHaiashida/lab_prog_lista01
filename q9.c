#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Seu sucessor é: %d\n", numero + 1);
    printf("Seu antecessor é: %d\n", numero - 1);

    return 0;
}
