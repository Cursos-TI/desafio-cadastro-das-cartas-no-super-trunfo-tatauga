#include <stdio.h>
int main() {
// Desafio as variaveis para os atributos da cidade
int codigo;
char nome[50];
int populacao;
float area;
float pib;
int ponto_turisticos;

printf("Cadastro das Cartas - Paises\n");

printf("Digite o código da cidade: ");
scanf("%d", &codigo);

printf("Nome da Cidade; ");
scanf(" %[^\n]", nome);

printf("Digite a população da cidade: ");
scnaf("%d", &populacao);

printf("Digite a área da cidade (em km²): ");
scanf("%f", &area);

printf("Digite o PID da Cidade: ");
scanf("%f", &pib);

printf("Digite o número de pontos turístidos: ");
scanf("%d", &pontos_turisticos);

// Exibição dos  Dados das Cartas

printf("\nDados Cadastrados:\n");
printf("Código da Cidade: %d\n", codigo);
printf("Nome da Cidade: %s\n", nome);
printf("População; %d\n",populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: R$ %.2f\n", pib);
printf("Ponto Turísticos: %d\n", Pontos_turistico);


    return 0;
}
