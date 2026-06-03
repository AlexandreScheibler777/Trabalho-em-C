#include <stdio.h>
int main() {
// Declara as variáveis dos números
float numero1, numero2;
// Declara a variável da operação
char operacao;
// Lê os dois números
printf("Digite dois numeros: ");
scanf("%f %f", &numero1, &numero2);
// Lê a operação escolhida
printf("Digite a operacao (+, -, *, /): ");
scanf(" %c", &operacao);
// O switch escolhe qual operação será executada
switch (operacao) {
case '+':
printf("Resultado: %.2f\n", numero1 + numero2);
break;
case '-':
printf("Resultado: %.2f\n", numero1 - numero2);
break;
case '*':
printf("Resultado: %.2f\n", numero1 * numero2);
break;
case '/':
printf("Resultado: %.2f\n", numero1 / numero2);

break;
default:
printf("Operacao invalida\n");
}
// Finaliza o programa
return 0;
}
