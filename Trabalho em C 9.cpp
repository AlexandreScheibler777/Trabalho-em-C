#include <stdio.h>
int main() {
// Declara a variável que receberá o número
int numero;
// Lê o número digitado pelo usuário
printf("Digite um numero: ");
scanf("%d", &numero);
// Verifica se o número é positivo
if (numero > 0) {
printf("Positivo\n");
}
// Verifica se o número é negativo
else if (numero < 0) {
printf("Negativo\n");
}
// Caso não seja positivo nem negativo, é zero
else {
printf("Zero\n");
}
// Finaliza o programa
return 0;
}
