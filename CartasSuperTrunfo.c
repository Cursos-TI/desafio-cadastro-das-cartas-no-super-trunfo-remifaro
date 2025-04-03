#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    int populacaoA1;
    float areaA1;
    float pibA1;
    int numPontosTuristicosA1;
    
    int populacaoB4;
    float areaB4;
    float pibB4;
    int numPontosTuristicosB4;

    printf("\nBem vindo ao Cartas Super Trunfo!!!");
    printf("\nVamos iniciar cadastrando suas cartas.");

    // Cadastro das Cartas:
    printf("Digite o número da População da carta A1:");
    scanf("%d", &populacaoA1);
    printf("Digite o número da Área da carta A1:");
    scanf("%f", &areaA1);
    printf("Digite o número do PIB da carta A1:");
    scanf("%f", &pibA1);
    printf("Digite o número de pontos turísticos da carta A1:");
    scanf("%d", &numPontosTuristicosA1);

    printf("Digite o número da População da carta B4:");
    scanf("%d", &populacaoB4);
    printf("Digite o número da Área da carta B4:");
    scanf("%f", &areaB4);
    printf("Digite o número do PIB da carta B4:");
    scanf("%f", &pibB4);
    printf("Digite o número de pontos turísticos da carta B4:");
    scanf("%d", &numPontosTuristicosB4);

    // Exibição dos Dados das Cartas:
    printf("\nExcelente!\n");

    printf("\nEssa é a sua carta A1:\n");
    
    printf("População: %d\n", populacaoA1);
    printf("Área: %.2f\n", areaA1);
    printf("PIB: %.2f\n", pibA1);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicosA1);

    printf("Essa é a sua carta B4:\n");
    printf("População: %d\n", populacaoB4);
    printf("Área: %.2f\n", areaB4);
    printf("PIB: %.2f\n", pibB4);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicosB4);
    
       return 0;
}
