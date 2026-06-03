#include <stdio.h>
int main() {
// Declara duas variáveis inteiras
int numero1, numero2;
// Solicita os dois números ao usuário
printf("Digite dois numeros inteiros: ");
scanf("%d %d", &numero1, &numero2);
// Exibe a soma dos dois números
printf("Soma: %d\n", numero1 + numero2);
// Exibe a divisão inteira, sem casas decimais
printf("Divisao inteira: %d\n", numero1 / numero2);
// Usa casting para transformar o primeiro número em float
printf("Divisao real: %.2f\n", (float)numero1 / numero2);
// Finaliza o programa
return 0;
}
