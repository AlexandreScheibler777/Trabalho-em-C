#include <stdio.h>
int main() {
// Declara a variável do número
int numero;
// Declara o fatorial iniciando em 1
int fatorial = 1;
// Lê o número informado pelo usuário
printf("Digite um numero: ");
scanf("%d", &numero);
// Multiplica do número até 1
for (int i = numero; i >= 1; i--) {
// Atualiza o valor do fatorial
fatorial = fatorial * i;
}
// Exibe o resultado
printf("Fatorial: %d\n", fatorial);
// Finaliza o programa
return 0;
}
