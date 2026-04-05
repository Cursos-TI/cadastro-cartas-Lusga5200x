#include <stdio.h>

int main()
{
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    
    int populacao1, populacao2;
    int pontos_turistico1, pontos_turistico2;

    float area1, area2;
    float pib1, pib2;
    

// Área para entrada de dados

    printf("Vamos cadastrar a primeira carta\n");

    printf("\nDigite uma letra para representar o estado: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade(ex:A01): \n");
    scanf(" %s", &codigo1);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome1);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1);
    printf("Digite a PIB da cidade: \n");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %i", &pontos_turistico1);

    printf("\nAgora vamos cadastrar a segunda carta\n");

    printf("\nDigite uma letra para representar o estado: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade(ex:A01): \n");
    scanf(" %s", &codigo2);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome2);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);
    printf("Digite a PIB da cidade: \n");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %i", &pontos_turistico2);

// Área para exibição dos dados da cidade

    printf("\nCarta1: \n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %i\n", estado1, codigo1, nome1, populacao1, area1, pib1, pontos_turistico1);

    printf("\nCarta2: \n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2ff\nPIB: %.2f\nNúmero de Pontos Turísticos: %i\n", estado2, codigo2, nome2, populacao2, area2, pib2, pontos_turistico2);

    return 0;
}
