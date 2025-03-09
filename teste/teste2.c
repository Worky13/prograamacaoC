#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidadeP1;
    float pibpc1;
    float super_poder1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidadeP2;
    float pibpc2;
    float super_poder2;

    // Apresentação do Jogo
    printf("Bem Vindo ao Super Trunfo Estados & Cidades!\n");
    printf("\n");
    printf("Antes de começar vamos cadastrar as cartas:\n");
    printf("\n");

    // Leitura dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);
    printf("População: ");
    scanf("%i", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos_turisticos1);

    // Leitura dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf("%i", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos_turisticos2);

    // Calculo Densidade Populacional
    densidadeP1 = (float) populacao1 / area1;
    densidadeP2 = (float) populacao2 / area2;

    // Calculo PIB per Capita
    pibpc1 = (float) pib1 / populacao1;
    pibpc2 = (float) pib2 / populacao2;

    // Calculo Super Poder
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibpc1 + (1 / densidadeP1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibpc2 + (1 / densidadeP2);

    // Retornas os cadastros
    printf("\n");
    printf("Esses são os valores cadastrados:");
    printf("\n");

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidadeP1);
    printf("PIB per Capita: %.2f\n", pibpc1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidadeP2);
    printf("PIB per Capita: %.2f\n", pibpc2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação das Cartas
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);

    // Comparação de Área
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);

    // Comparação de PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, pontos_turisticos1 > pontos_turisticos2);

    // Comparação de Densidade Populacional
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadeP1 < densidadeP2) ? 1 : 2, densidadeP1 < densidadeP2);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpc1 > pibpc2) ? 1 : 2, pibpc1 > pibpc2);

    // Comparação de Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, super_poder1 > super_poder2);

    return 0;
}