#include <stdio.h>

int main() {
    float tempCelsius, tempFahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &tempCelsius);

    tempFahrenheit = (9 * tempCelsius + 160) / 5;

    printf("A temperatura em graus Fahrenheit é: %.2f\n", tempFahrenheit);

    return 0;
}
