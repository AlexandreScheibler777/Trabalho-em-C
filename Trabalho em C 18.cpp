#include <stdio.h>
int main() {
// Declara um vetor com 10 posições
int vetor[10];
// Declara as variáveis para maior valor e posição
int maior, posicao;
// Lê os 10 valores do vetor
for (int i = 0; i < 10; i++) {
// Lê um valor para a posição atual
printf("Digite um valor: ");
scanf("%d", &vetor[i]);
}
// Considera o primeiro elemento como o maior inicialmente
maior = vetor[0];
posicao = 0;
// Percorre o vetor para encontrar o maior valor
for (int i = 1; i < 10; i++) {
// Se encontrar valor maior, atualiza maior e posição
if (vetor[i] > maior) {
maior = vetor[i];
posicao = i;
}
}
// Exibe o maior valor encontrado
printf("Maior valor: %d\n", maior);
// Exibe a posição do maior valor
printf("Posicao do maior valor: %d\n", posicao);
// Finaliza o programa
return 0;
}
