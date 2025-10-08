//Criei um programa em C que permite o cadastro de cartas representando cidades, utilizando scanf para entrada de dados e printf para exibir as informações.
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
// Declaração das variáveis da Carta 1
  char estado1 [3];
  char cod_carta1 [4];
  char cidade1 [50];
  int populacao1;
  float area_km1;
  float pib1;
  int num_turistico1;

  //Declaração das variáveis da Carta 2
  char estado2 [3];
  char cod_carta2 [4];
  char cidade2 [50];
  int populacao2;
  float area_km2;
  float pib2;
  int num_turistico2;

// Área para entrada de dados
// Entrada de dados para cadastro da Carta 1
  printf("----- Cadastro da Carta 1 -----\n");
  printf("\nInforme o Estado: ");
  scanf("%s", estado1);

  printf("Informe o Código da carta 1: ");
  scanf("%s", cod_carta1);

  printf("Informe o Nome da Cidade: ");
  getchar(); // Limpa o buffer do teclado antes de usar fgets
  fgets(cidade1, sizeof(cidade1), stdin); // Usando fgets para permitir nomes com espaços;
  printf("Informe o quantidade populacional: ");
  scanf("%d", &populacao1);

  printf("Informa a Área da cidade em KM²: ");
  scanf("%f", &area_km1);

  printf("Informe o PIB: ");
  scanf("%f", &pib1);

  printf("Informe a quantidade de pontos turísticos: ");
  scanf("%d", &num_turistico1);

  // Entrada de dados para cadastro da Carta 2
  printf("\n----- Cadastro da Carta 2 -----\n");
  printf("\nInforme o Estado: ");
  scanf("%s", estado2);

  printf("Informe o Código da carta 2: ");
  scanf("%s", cod_carta2);

  printf("Informe o Nome da Cidade: ");
  getchar(); // Limpar o buffer do teclado antes de usar fgets
  fgets(cidade2, sizeof(cidade2), stdin); // Usando fgets para permitir nomes com espaços

  printf("Informe o quantidade populacional: ");
  scanf("%d", &populacao2);

  printf("Informa a Área da cidade em KM²: ");
  scanf("%f", &area_km2);

  printf("Informe o PIB: ");
  scanf("%f", &pib2);

  printf("Informe a quantidade de pontos turísticos: ");
  scanf("%d", &num_turistico2);

// Área para exibição dos dados da cidade
// Exibição dos dados da Carta 1
  printf("\n---------- Carta 1 ----------\n");
  printf("Número da Carta 1: %s\n", cod_carta1);
  printf("Estado: %s\n", estado1);
  printf("Cidade: %s", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km² \n", area_km1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", num_turistico1);

  // Exibição dos dados da Carta 2
  printf("\n---------- Carta 2 ----------\n");
  printf("Número da Carta 2: %s\n", cod_carta2);
  printf("Estado: %s\n", estado2);
  printf("Cidade: %s", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km² \n", area_km2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", num_turistico2);

return 0;
}