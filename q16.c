#include <stdio.h>

int main() {
    float valorHrAula, numeroHrs, percentINSS, salarioBruto, salarioLiquido;

    printf("Digite o valor da hora aula: ");
    scanf("%f", &valorHrAula);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &numeroHrs);

    printf("Digite percentual do INSS");
    scanf("%f", &percentINSS);

    salarioBruto = valorHrAula * numeroHrs;

    salarioLiquido = salarioBruto - (salarioBruto * percentINSS / 100);

    printf("Salário bruto: R$ %.2f\n", salarioBruto);
    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
