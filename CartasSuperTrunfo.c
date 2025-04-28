#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Dados da primeira carta
    char estado1[3], codigo1[10], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    float densidade1, pib_percapta1;

    // Dados da segunda carta
    char estado2[3], codigo2[10], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_percapta2;

    // Entrada de dados para a primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Informe a sigla do estado: ");
    scanf("%2s", estado1);
    getchar();

    printf("Informe o código da carta: ");
    fgets(codigo1, 10, stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';

    printf("Informe o nome da cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar();

    // Entrada de dados para a segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Informe a sigla do estado: ");
    scanf("%2s", estado2);
    getchar();

    printf("Informe o código da carta: ");
    fgets(codigo2, 10, stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Informe o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_percapta1 = pib1 / populacao1;
    pib_percapta2 = pib2 / populacao2;

    // Saída dos cálculos
    printf("\nDensidade Populacional e PIB per capita calculados:\n");
    printf("Carta 1 - %s (%s):\n", cidade1, estado1);
    printf("  Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("  PIB per capita: %.2f\n", pib_percapta1);

    printf("\nCarta 2 - %s (%s):\n", cidade2, estado2);
    printf("  Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("  PIB per capita: %.2f\n", pib_percapta2);

    // Comparação pelo atributo escolhido (POPULAÇÃO)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("\nCarta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
