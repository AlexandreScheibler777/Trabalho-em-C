#include <stdio.h>
int main() {
// Declara duas variáveis reais
float numero1, numero2;
// Lê os dois números digitados pelo usuário
printf("Digite dois numeros: ");
scanf("%f %f", &numero1, &numero2);
// Calcula e exibe a soma
printf("Soma: %.2f\n", numero1 + numero2);
// Calcula e exibe a subtração
printf("Subtracao: %.2f\n", numero1 - numero2);
// Calcula e exibe a multiplicação
printf("Multiplicacao: %.2f\n", numero1 * numero2);
// Calcula e exibe a divisão
printf("Divisao: %.2f\n", numero1 / numero2);
// Finaliza o programa
return 0;
}
