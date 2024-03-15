#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;

    printf("O valor absoluto é: %d\n", num);

    return 0;
}
