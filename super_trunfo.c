#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
// Declaração das variáveis da Carta 1
  char estado1 [3], cod_carta1 [4], cidade1 [50]; // Declaração múltipla de variáveis do tipo
  int populacao1, num_turistico1;
  float area_km1, pib1, densidade_populacional1;

  //Declaração das variáveis da Carta 2
  char estado2 [3], cod_carta2 [4], cidade2 [50];
  int populacao2, num_turistico2;
  float area_km2, pib2, densidade_populacional2;
  
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

  densidade_populacional1 = populacao1 / area_km1; // Cálculo da densidade populacional
  printf("A densidade populacional é: %.2f habitantes por Km²\n", densidade_populacional1); // Exibição da densidade populacional

  pib1 = pib1 / populacao1; // Conversão do PIB para bilhões
  printf("O PIB em bilhões é: %.2f bilhões de reais\n", pib1); // Exibição do PIB em bilhões
  
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

  densidade_populacional2 = populacao2 / area_km2; // Cálculo da densidade populacional
  printf("A densidade populacional é: %.2f habitantes por Km²\n", densidade_populacional2); // Exibição da densidade populacional

  pib1 = pib1 / populacao1; // Conversão do PIB para bilhões
  printf("O PIB em bilhões é: %.2f bilhões de reais\n", pib1); // Exibição do PIB em bilhões

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