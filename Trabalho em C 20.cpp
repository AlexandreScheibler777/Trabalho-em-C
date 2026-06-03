#include <stdio.h>
int main() {
// Declara uma matriz 3x3
int matriz[3][3];
// Percorre as linhas da matriz
for (int i = 0; i < 3; i++) {
// Percorre as colunas da matriz
for (int j = 0; j < 3; j++) {
// Lê o valor da posição [i][j]
printf("Digite um valor: ");
scanf("%d", &matriz[i][j]);
}
}
// Exibe os elementos da diagonal principal
printf("Diagonal principal:\n");
// Na diagonal principal, linha e coluna têm o mesmo índice
for (int i = 0; i < 3; i++) {
// Exibe matriz[0][0], matriz[1][1] e matriz[2][2]
printf("%d\n", matriz[i][i]);
}
// Finaliza o programa
return 0;
}
