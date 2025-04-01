#include <stdio.h>
#include <string.h>

int main() {
    printf("\nDesafio Super Trunfo\n");

    char estado1[50], codigo1[10], cidade1[50];
    float populacao1, area1, PIB1, densidade1, PIBPC1;
    int pontosturisticos1;

    char estado2[50], codigo2[10], cidade2[50];
    float populacao2, area2, PIB2, densidade2, PIBPC2;
    int pontosturisticos2;

    // Entrada da carta 1
    printf("\nCarta 1\n");
    printf("Digite o estado da carta 1 (A-H): ");
    scanf("%s", estado1);

    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    getchar(); 
    printf("Digite o nome da cidade da carta 1: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; 

    printf("Digite a população da cidade da carta 1 (em mil habitantes): ");
    scanf("%f", &populacao1);

    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1 (em milhões de reais): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontosturisticos1);

    densidade1 = populacao1 / area1;
    PIBPC1 = PIB1 / populacao1;

    // Entrada da carta 2
    printf("\nCarta 2\n");
    printf("Digite o estado da carta 2 (A-H): ");
    scanf("%s", estado2);

    printf("Digite o código da carta 2 (ex: A01): ");
    scanf("%s", codigo2);

    getchar(); 
    printf("Digite o nome da cidade da carta 2: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; 

    printf("Digite a população da cidade da carta 2 (em mil habitantes): ");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2 (em milhões de reais): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2 / area2;
    PIBPC2 = PIB2 / populacao2;

    // Exibição dos dados
    printf("\n=== Informações da Carta 1 ===\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", estado1, codigo1, cidade1);
    printf("População: %.2f mil habitantes\nÁrea: %.2f km²\n", populacao1, area1);
    printf("PIB: R$ %.2f milhões\nPontos Turísticos: %d\n", PIB1, pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f mil\n", densidade1, PIBPC1);

    printf("\n=== Informações da Carta 2 ===\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %.2f mil habitantes\nÁrea: %.2f km²\n", populacao2, area2);
    printf("PIB: R$ %.2f milhões\nPontos Turísticos: %d\n", PIB2, pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f mil\n", densidade2, PIBPC2);

    return 0;
}
