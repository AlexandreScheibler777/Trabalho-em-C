#include <stdio.h>
int main() {
// Declara as variáveis das notas e da média
float nota1, nota2, media;
// Lê as duas notas do aluno
printf("Digite duas notas: ");
scanf("%f %f", &nota1, &nota2);
// Calcula a média aritmética
media = (nota1 + nota2) / 2;
// Verifica se o aluno foi aprovado
if (media >= 7) {
printf("Aprovado\n");
}
// Verifica se o aluno ficou em recuperação
else if (media >= 5) {
printf("Recuperacao\n");
}
// Caso contrário, o aluno foi reprovado
else {
printf("Reprovado\n");
}
// Finaliza o programa
return 0;
}
