#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;                 // Letra de A a H
    char codigo[4];             // Ex: A01, B03
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // Número de habitantes
    float area;                // Área em km²
    float pib;                 // PIB da cidade
    int pontosTuristicos;     // Número de pontos turísticos
};

int main() {
    struct Carta cartas[2];  // Array para armazenar duas cartas

    printf("=== Cadastro de Cartas do Super Trunfo ===\n");

    for (int i = 0; i < 2; i++) {
        printf("\n--- Carta %d ---\n", i + 1);

        // Estado
        printf("Estado (letra de A a H): ");
        scanf(" %c", &cartas[i].estado);

        // Código da carta
        printf("Código da Carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        // Nome da cidade
        printf("Nome da Cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade);  // Lê até a quebra de linha

        // População
        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        // Área
        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);

        // PIB
        printf("PIB (em R$): ");
        scanf("%f", &cartas[i].pib);

        // Número de pontos turísticos
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    // Exibição das cartas cadastradas
    printf("\n=== Cartas Cadastradas ===\n");
    for (int i = 0; i < 2; i++) {
        printf("\n--- Carta %d ---\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código da Carta: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: R$ %.2f\n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}
