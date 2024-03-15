#include <stdio.h>

int main() {
    int num;

    printf("Entre com o valor: ");
    scanf("%d", &num);

    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}
