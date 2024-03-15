#include <stdio.h>

int main() {
    float valorConta;
    float taxaGarcom;
    float totalAPagar;

    printf("Digite o valor da conta: R$ ");
    scanf("%f", &valorConta);

    taxaGarcom = 0.1 * valorConta;

    totalAPagar = valorConta + taxaGarcom;

    printf("Valor total a ser pago: R$ %.2f\n", totalAPagar);

    return 0;
}
