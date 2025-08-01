#include <stdio.h>

int main() {
  char nome1[50], nome2[50];
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Atributos calculados
    float dens1, dens2;
    float pc1, pc2;
    float sp1, sp2;

    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nome1);
    prinf("Digite a populacao da primeira cidade: ");
    scanf("%lu", &pop1);
    printf("Digite a area da primeira cidade: ");
    scanf("%f", &area1);
    printf("Digite o pib da primeira cidade: ");
    scanf("%f", pib1);
    printf("Digite o numeros de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontos1);
    scanf("%lu %f %f %d", &pop1, &area1, &pib1, &pontos1);

    
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a populacao da segunda cidade: ");
    scanf("%lu", &pop2);
    printf("Digita a area da segunda cidade: ");
    scanf("%f", &area2);
    printf("Digite o pib da segunda cidade: ");
    scanf("%f", pib2);
    printf("Digite o numero de pontos turisticos da segunda cidade: ");
    scanf(" %[^\n]", pontos2);
    scanf("%lu %f %f %d", &pop2, &area2, &pib2, &pontos2);

    // Calcula atributos derivados
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;
    pc1 = (pib1 * 1000000000.0f) / pop1;
    pc2 = (pib2 * 1000000000.0f) / pop2;

    // Calcula super poder
    sp1 = pop1 + area1 + pib1 + pontos1 + pc1 + (1.0f / dens1);
    sp2 = pop2 + area2 + pib2 + pontos2 + pc2 + (1.0f / dens2);

    // Comparações
    printf("Populacao: %d\n", pop1 > pop2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontos1 > pontos2);
    printf("PIB per capita: %d\n", pc1 > pc2);
    printf("Densidade: %d\n", dens1 < dens2); // menor vence
    printf("Super Poder: %d\n", sp1 > sp2);

    return 0;
}
