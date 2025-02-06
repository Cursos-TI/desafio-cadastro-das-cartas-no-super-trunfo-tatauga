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

printf("Digita a população da cidade: ");
scnaf("%d", &populacao);

printf("Digita a área da cidade (em km²): ");
scanf("%f", &area);

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
