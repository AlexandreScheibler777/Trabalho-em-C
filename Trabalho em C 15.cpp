#include <stdio.h>
int main() {
// Declara a variável que receberá cada número
int numero;
// Declara a variável soma iniciando em zero
int soma = 0;
// Repete 5 vezes para ler 5 números
for (int i = 1; i <= 5; i++) {
// Lê um número
printf("Digite um numero: ");
scanf("%d", &numero);
// Soma o número digitado ao total
soma = soma + numero;
}
// Exibe a soma total
printf("Soma total: %d\n", soma);
// Finaliza o programa
return 0;
}
