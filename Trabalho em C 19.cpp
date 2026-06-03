#include <stdio.h>
int main() {
// Declara uma matriz 2x2
int matriz[2][2];
// Declara a variável soma iniciando em zero
int soma = 0;
// Percorre as linhas da matriz
for (int i = 0; i < 2; i++) {
// Percorre as colunas da matriz
for (int j = 0; j < 2; j++) {
// Lê o valor da posição [i][j]
printf("Digite um valor: ");
scanf("%d", &matriz[i][j]);
// Soma o valor digitado ao total
soma = soma + matriz[i][j];
}
}
// Exibe a soma dos elementos
printf("Soma dos elementos: %d\n", soma);
// Finaliza o programa
return 0;

}
