#include <stdio.h>
int main() {
// Declara um vetor com 5 posições
int vetor[5];
// Lê os 5 valores do vetor
for (int i = 0; i < 5; i++) {
// Lê um valor para a posição i
printf("Digite um valor: ");
scanf("%d", &vetor[i]);
}
// Exibe todos os elementos do vetor
for (int i = 0; i < 5; i++) {
// Mostra o valor armazenado em cada posição
printf("Vetor[%d] = %d\n", i, vetor[i]);
}
// Finaliza o programa
return 0;
}
