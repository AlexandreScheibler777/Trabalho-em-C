#include <stdio.h>
int main() {
// Declara a variável do número
int numero;
// Lê o número informado pelo usuário
printf("Digite um numero: ");
scanf("%d", &numero);
// Calcula a tabuada de 1 até 10
for (int i = 1; i <= 10; i++) {
// Exibe cada linha da tabuada
printf("%d x %d = %d\n", numero, i, numero * i);
}
// Finaliza o programa
return 0;
}
