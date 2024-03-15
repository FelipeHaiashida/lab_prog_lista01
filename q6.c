#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = 62.1 * altura - 44.7;
    } else {
        printf("Sexo inválido. Por favor, insira 'M' para masculino ou 'F' para feminino.\n");
        return 1;
    }

    printf("O peso ideal é: %.2f kg\n", pesoIdeal);

    return 0;
}
