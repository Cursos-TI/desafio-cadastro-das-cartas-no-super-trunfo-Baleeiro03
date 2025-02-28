#include <stdio.h>

int main() {
    // Variáveis das cartas para duas cidades
    int pib1, pib2, pontos1, pontos2;
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];

    // Coleta de dados para a primeira cidade
    printf("Digite o código da primeira cidade:\n");
    scanf(" %3s", codigo1);
    
    printf("Digite o nome da primeira cidade:\n");
    scanf(" %s", nome1);
    
    printf("Digite a área da primeira cidade:\n");
    scanf(" %f", &area1);
    
    printf("Digite a população da primeira cidade:\n");
    scanf(" %lu", &populacao1);
    
    printf("Digite o PIB da primeira cidade:\n");
    scanf(" %d", &pib1);
    
    printf("Digite a quantidade de pontos turísticos da primeira cidade:\n");
    scanf(" %d", &pontos1);
    
    // Coleta de dados para a segunda cidade
    printf("\nDigite o código da segunda cidade:\n");
    scanf(" %3s", codigo2);
    
    printf("Digite o nome da segunda cidade:\n");
    scanf(" %s", nome2);
    
    printf("Digite a área da segunda cidade:\n");
    scanf(" %f", &area2);
    
    printf("Digite a população da segunda cidade:\n");
    scanf(" %lu", &populacao2);
    
    printf("Digite o PIB da segunda cidade:\n");
    scanf(" %d", &pib2);
    
    printf("Digite a quantidade de pontos turísticos da segunda cidade:\n");
    scanf(" %d", &pontos2);
    
    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = (float)pib1 / populacao1;
    pib_per_capita2 = (float)pib2 / populacao2;
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1 / densidade2);
    
    // Exibição dos resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);
    
    return 0;
}
