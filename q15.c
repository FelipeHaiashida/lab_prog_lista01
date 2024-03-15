#include <stdio.h>

int main() {
    int diasTrabalhados;
    float valorDiario = 50.25, valorBruto, valorLiquido, gratificacao;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    valorBruto = diasTrabalhados * valorDiario;

    if (diasTrabalhados <= 10) {
        gratificacao = 0;
    } else if (diasTrabalhados <= 20) {
        gratificacao = valorBruto * 0.2;
    } else {
        gratificacao = valorBruto * 0.3;
    }

    valorLiquido = valorBruto + gratificacao - (valorBruto * 0.1);

    printf("O valor líquido a ser pago ao vendedor é: R$ %.2f\n", valorLiquido);

    return 0;
}
