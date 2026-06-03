#include <stdio.h>
int main() {
// Declara duas variáveis inteiras
int numero1, numero2;
// Lê os dois números
printf("Digite dois numeros inteiros: ");
scanf("%d %d", &numero1, &numero2);
// Verifica se os números são iguais
if (numero1 == numero2) {
printf("Os numeros sao iguais.\n");
}
// Verifica se o primeiro número é maior
if (numero1 > numero2) {
printf("O primeiro numero e maior.\n");
}
// Verifica se o segundo número é maior
if (numero2 > numero1) {
printf("O segundo numero e maior.\n");
}
// Finaliza o programa
return 0;
}
