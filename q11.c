#include <stdio.h>

int main() {
    float valorReal, cotacaoDolar, valorDolar;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

		printf("Digite o valor em reais: ");
		scanf("%f", &valorReal);

    valorDolar = valorReal / cotacaoDolar;

    printf("O valor em dólar é: %.2f\n", valorDolar);

    return 0;
}
