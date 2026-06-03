#include <stdio.h>
int main() {
// Declara a variável que receberá o número
int numero;
// Lê o número digitado pelo usuário
printf("Digite um numero inteiro: ");
scanf("%d", &numero);
// Exibe o antecessor do número
printf("Antecessor: %d\n", numero - 1);
// Exibe o sucessor do número
printf("Sucessor: %d\n", numero + 1);
// Finaliza o programa
return 0;
}
