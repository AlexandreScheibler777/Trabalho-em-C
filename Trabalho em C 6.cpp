#include <stdio.h>
int main() {
// Vetor de caracteres para guardar o nome
char nome[50];
// Variável inteira para guardar a idade
int idade;
// Vetor de caracteres para guardar a cidade
char cidade[50];
// Lê o nome do usuário
printf("Digite o nome: ");
scanf("%s", nome);
// Lê a idade do usuário
printf("Digite a idade: ");
scanf("%d", &idade);
// Lê a cidade do usuário
printf("Digite a cidade: ");
scanf("%s", cidade);
// Exibe os dados cadastrados
printf("Nome: %s\n", nome);
printf("Idade: %d\n", idade);
printf("Cidade: %s\n", cidade);
// Finaliza o programa
return 0;
}
