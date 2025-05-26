#include <stdio.h>
#include <locale.h>
#include <string.h>

// Função para limpar o buffer
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

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
    limparBuffer();

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
    limparBuffer();

    // Entrada de dados para a segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Informe a sigla do estado: ");
    scanf("%2s", estado2);
    limparBuffer();

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
    densidade1 = (area1 != 0) ? populacao1 / area1 : 0;
    densidade2 = (area2 != 0) ? populacao2 / area2 : 0;

    pib_percapta1 = (populacao1 != 0) ? pib1 / populacao1 : 0;
    pib_percapta2 = (populacao2 != 0) ? pib2 / populacao2 : 0;

    // Menu de comparação
    int opcao;
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparar as cartas: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (%s) x %s (%s)\n", cidade1, estado1, cidade2, estado2);

    switch(opcao) {
        case 1:
            printf("\nAtributo: População\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2:
            printf("\nAtributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3:
            printf("\nAtributo: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4:
            printf("\nAtributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5:
            printf("\nAtributo: Densidade Demográfica\n");
            printf("%s: %.2f habitantes/km²\n", cidade1, densidade1);
            printf("%s: %.2f habitantes/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("\nResultado: %s venceu (menor densidade)!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("\nResultado: %s venceu (menor densidade)!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}