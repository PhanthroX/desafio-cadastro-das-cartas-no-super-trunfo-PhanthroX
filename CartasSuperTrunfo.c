#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char estado_a[3], estado_b[3], cidade_a[50], cidade_b[50];  
    int populacao_a, populacao_b, pontos_turisticos_a, pontos_turisticos_b;
    float area_a, area_b, pib_a, pib_b;
    float densidade_populacional_a, densidade_populacional_b, pib_percapta_a, pib_percapta_b;
    float super_poder_a, super_poder_b;

    /* Dados Primeira Carta */
    printf("Dados da Primeira Carta: \n");

    printf("Informe a sigla do estado: ");
    scanf("%2s", estado_a);
    getchar();

    printf("Informe o nome da cidade: ");
    fgets(cidade_a, 50, stdin);
    cidade_a[strcspn(cidade_a, "\n")] = '\0';

    printf("Informe a população da cidade: ");
    scanf("%i", &populacao_a);

    printf("Informe a área da cidade: ");
    scanf("%f", &area_a);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib_a);

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%i", &pontos_turisticos_a);
    getchar();

    /* Dados Segunda Carta */
    printf("\nDados da Segunda Carta: \n");

    printf("Informe a sigla do estado: ");
    scanf("%2s", estado_b);
    getchar();

    printf("Informe o nome da cidade: ");
    fgets(cidade_b, 50, stdin);
    cidade_b[strcspn(cidade_b, "\n")] = '\0';

    printf("Informe a população da cidade: ");
    scanf("%i", &populacao_b);

    printf("Informe a área da cidade: ");
    scanf("%f", &area_b);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib_b);

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%i", &pontos_turisticos_b);

    /* Cálculos */
    densidade_populacional_a = populacao_a / area_a;
    densidade_populacional_b = populacao_b / area_b;

    pib_percapta_a = pib_a / populacao_a;
    pib_percapta_b = pib_b / populacao_b;

    super_poder_a = populacao_a + area_a + pib_a + pontos_turisticos_a + pib_percapta_a + (1 / densidade_populacional_a);
    super_poder_b = populacao_b + area_b + pib_b + pontos_turisticos_b + pib_percapta_b + (1 / densidade_populacional_b);

    /* Exibindo os dados cadastrados */
    printf("\nDados cadastrados Primeira Carta:\n");
    printf("Estado: %s\n", estado_a);
    printf("Cidade: %s\n", cidade_a);
    printf("População: %i\n", populacao_a);
    printf("Área: %.2f km²\n", area_a);
    printf("PIB: %.2f\n", pib_a);
    printf("Pontos turísticos: %i\n", pontos_turisticos_a);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_a);
    printf("PIB per capita: %.2f\n", pib_percapta_a);
    printf("Super Poder: %.2f\n", super_poder_a);

    printf("\nDados cadastrados Segunda Carta:\n");
    printf("Estado: %s\n", estado_b);
    printf("Cidade: %s\n", cidade_b);
    printf("População: %i\n", populacao_b);
    printf("Área: %.2f km²\n", area_b);
    printf("PIB: %.2f\n", pib_b);
    printf("Pontos turísticos: %i\n", pontos_turisticos_b);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_b);
    printf("PIB per capita: %.2f\n", pib_percapta_b);
    printf("Super Poder: %.2f\n", super_poder_b);

    /* Comparações */
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao_a > populacao_b);
    printf("Área: Carta 1 venceu (%d)\n", area_a > area_b);
    printf("PIB: Carta 1 venceu (%d)\n", pib_a > pib_b);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos_a > pontos_turisticos_b);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional_a < densidade_populacional_b);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_percapta_a > pib_percapta_b);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_a > super_poder_b);

    return 0;
}
