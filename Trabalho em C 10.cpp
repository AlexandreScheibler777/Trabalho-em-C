#include <stdio.h>
int main() {
// Declara a variável inteira
int numero;
// Lê o número digitado pelo usuário

printf("Digite um numero inteiro: ");
scanf("%d", &numero);
// Usa o resto da divisão por 2 para verificar se é par
if (numero % 2 == 0) {
printf("Par\n");
}
// Se não for par, é ímpar
else {
printf("Impar\n");
}
// Finaliza o programa
return 0;
}
