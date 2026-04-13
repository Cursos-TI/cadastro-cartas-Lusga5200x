#include <stdio.h>

int main()
{
    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das cartas

    // Área para definição das variáveis

    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];

    unsigned long int populacao1, populacao2;
    int pontos_turistico1, pontos_turistico2;

    float area1, area2;
    float pib1, pib2;
    float super_poder1, super_poder2;

    double densidade_pop1, densidade_pop2;
    double pib_percapita1, pib_percapita2;


    // ===============================
    // Entrada de dados - Carta 1
    // ===============================

    printf("Vamos cadastrar a primeira carta\n");

    printf("\nDigite uma letra para representar o estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade (ex:A01):\n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nome1);

    printf("Digite a população da cidade:\n");
    scanf(" %lu", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf(" %i", &pontos_turistico1);


    // Cálculos da Carta 1

    densidade_pop1 = (double) populacao1 / area1;
    pib_percapita1 = (double) pib1 / populacao1;

    super_poder1 = populacao1 + area1 + pib1 + pontos_turistico1 + pib_percapita1 + (1.0 / densidade_pop1);


    // ===============================
    // Entrada de dados - Carta 2
    // ===============================

    printf("\nVamos cadastrar a segunda carta\n");

    printf("\nDigite uma letra para representar o estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade (ex:A01):\n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nome2);

    printf("Digite a população da cidade:\n");
    scanf(" %lu", &populacao2);

    printf("Digite a área da cidade:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf(" %i", &pontos_turistico2);


    // Cálculos da Carta 2

    densidade_pop2 = (double) populacao2 / area2;
    pib_percapita2 = (double) pib2 / populacao2;

    super_poder2 = populacao2 + area2 + pib2 + pontos_turistico2 + pib_percapita2 + (1.0 / densidade_pop2);


    // ===============================
    // Exibição das Cartas
    // ===============================

    printf("\nCarta1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontos_turistico1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: R$%.2f\n", pib_percapita1);
    printf("Super poder: %f\n", super_poder1);


    printf("\nCarta2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontos_turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: R$%.2f\n", pib_percapita2);
    printf("Super poder: %f\n", super_poder2);


    // ===============================
    // Comparação das Cartas
    // ===============================

    printf("\nComparação das cartas:\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos_turistico1 > pontos_turistico2);
    printf("Densidade Populacional: %d\n", densidade_pop1 < densidade_pop2);
    printf("PIB per Capita: %d\n", pib_percapita1 > pib_percapita2);
    printf("Super poder: %d\n", super_poder1 > super_poder2);

    return 0;
}
