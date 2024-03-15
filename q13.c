#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Digite um número: ");
    scanf("%d", &a);
  
    printf("Digite outro número: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Valor de A depois da troca: %d\n", a);
    printf("Valor de B depois da troca: %d\n", b);

    return 0;
}
