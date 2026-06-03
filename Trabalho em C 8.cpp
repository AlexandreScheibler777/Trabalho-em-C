#include <stdio.h>
int main() {
// Declara variável para Celsius
float celsius;
// Declara variável para Fahrenheit
float fahrenheit;
// Lê a temperatura em Celsius
printf("Digite a temperatura em Celsius: ");
scanf("%f", &celsius);
// Aplica a fórmula de conversão
fahrenheit = (9 * celsius / 5) + 32;
// Exibe a temperatura convertida
printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
// Finaliza o programa
return 0;
}
