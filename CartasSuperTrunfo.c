#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  /*Primeira carta*/

/*Variáveis da primeira carta*/
    char estado1;
    char codigo1[8];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    printf("Vamos cadastrar a primeira carta!\n\nDigite uma letra para representar o estado onde fica a cidade: \n");
    scanf("%c", &estado1);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo1);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nome1, 50, stdin);

    printf("Digite a população da cidade: \n");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite a PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_turisticos1);

/*Lendo a primeira carta*/ 

    printf("\nCarta 1\nEstado: %c\nCódigo: %s\nNome da Cicade: %sPopulação: %i\nÁrea: %.2f\nPib: %.2f\nNúmero de Pontos Turísticos: %i", estado1, codigo1, nome1, populacao1, area1, pib1, pontos_turisticos1);


/*Segunda carta*/

/*Variáveis da segunda carta*/
    char estado2;
    char codigo2[8];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("\n\nAgora vamos cadastrar a segunda carta!\n\nDigite uma letra para representar o estado onde fica a cidade: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo2);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nome2, 50, stdin);

    printf("Digite a população da cidade: \n");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite a PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_turisticos2);

/*Lendo a segunda carta*/ 

    printf("\nCarta 2\nEstado: %c\nCódigo: %s\nNome da Cicade: %sPopulação: %i\nÁrea: %.2f\nPib: %.2f\nNúmero de Pontos Turísticos: %i", estado2, codigo2, nome2, populacao2, area2, pib2, pontos_turisticos2);

return 0;
} 
