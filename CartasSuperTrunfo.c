#include <stdio.h>

int main() {

    // Variáveis das cartas
    int pib, pontos;
    float populacao, area;
    char codigo[4];
    char nome[50];

    // Coleta de dados
    printf("Digite o código do local:\n");
    scanf(" %3s", &codigo);

    printf("Digite o nome do local:\n");
    scanf(" %s", &nome);

    printf("Digite a área:\n");
    scanf(" %f", &area); 

    printf("Digite a população:\n");
    scanf(" %f", &populacao); 

    printf("Digite o PIB:\n");
    scanf(" %d", &pib); 

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf(" %d", &pontos); 
    // Exibição dos valores inseridos
    printf("Código do local: %s\n", codigo);
    printf("Nome do local: %s", nome);
    printf("Área do local: %.2f km²\n", area);
    printf("População do local: %.2f habitantes\n", populacao);
    printf("PIB do local: %d milhões\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", pontos);

    return 0;
}
