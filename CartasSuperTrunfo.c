#include <stdio.h>

int main() {
    int codigoDaCidade;
    char nome[50];
    int populacao;
    float area;
    int pib;
    int numerosDePontosTuristicos;

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigoDaCidade);
    printf("Digite o nome da cidade: \n");
    scanf("%s",nome);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%d", &pib);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numerosDePontosTuristicos);

  printf("Código da cidade: %d\n", codigoDaCidade);
  printf("Nome da cidade: %s\n", nome);
  printf("População da cidade: %d\n", populacao);
  printf("Área da cidade: %.2f km²\n", area);
  printf("PIB da cidade: %d\n", pib);
  printf("Número de pontos turísticos: %d\n", numerosDePontosTuristicos);

  return 0;
}
