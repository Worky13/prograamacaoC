#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1[3]; // Estado (ex: PR)
    char codigo1[4]; // Código da Carta (ex: A01)
    char cidade1[50]; // Nome da Cidade
    unsigned long int populacao1; // População (observação: a atividade pede apenas INT, mas preferi manter o tipo de variavel usada no código anterior)
    float area1; // Área (em km²)
    float pib1; // PIB (em bilhões de reais)
    int pontos_turisticos1; // Número de Pontos Turísticos
    float densidadeP1; // Densidade Populacional
    float pibpc1; // PIB per Capita

    // Variáveis para a segunda carta
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidadeP2;
    float pibpc2;

    // Apresentação do Jogo
    printf("Bem Vindo ao Super Trunfo Estados & Cidades!\n");
    printf("\n");
    printf("Antes de começar vamos cadastrar as cartas:\n");
    printf("\n");

    // Leitura dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: PR): ");
    scanf("%s", estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Lê a linha inteira, incluindo espaços sem uso de fgets (obs:aprendido fora do curso)
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos_turisticos1);

    // Leitura dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos_turisticos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidadeP1 = (float) populacao1 / area1;
    densidadeP2 = (float) populacao2 / area2;

    pibpc1 = (float) pib1 / populacao1;
    pibpc2 = (float) pib2 / populacao2;

    // Exibição dos dados das cartas
    printf("\nDados das Cartas:\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidadeP1);
    printf("PIB per Capita: %.2f\n", pibpc1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidadeP2);
    printf("PIB per Capita: %.2f\n", pibpc2);

    // Menu de escolha do atributo para comparação
    int opcao;
    printf("\nMenu de Comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha o atributo para comparação: ");
    scanf("%d", &opcao);

    // Comparação das Cartas
    printf("\nComparação de Cartas:\n");

    switch (opcao) {
        case 1:
            printf("Atributo escolhido: População\n");
            if (populacao1 == populacao2) {
                printf("Empate!\n");
            } else if (populacao1 > populacao2) {
                printf("%s (%s) venceu com população %lu!\n", cidade1, estado1, populacao1);
                printf("%s (%s) perdeu com população %lu!\n", cidade2, estado2, populacao2);
            } else {
                printf("%s (%s) venceu com população %lu!\n", cidade2, estado2, populacao2);
                printf("%s (%s) perdeu com população %lu!\n", cidade1, estado1, populacao1);
            }
            break;
        case 2:
            printf("Atributo escolhido: Área\n");
            if (area1 == area2) {
                printf("Empate!\n");
            } else if (area1 > area2) {
                printf("%s (%s) venceu com área %.2f km²!\n", cidade1, estado1, area1);
                printf("%s (%s) perdeu com área %.2f km²!\n", cidade2, estado2, area2);
            } else {
                printf("%s (%s) venceu com área %.2f km²!\n", cidade2, estado2, area2);
                printf("%s (%s) perdeu com área %.2f km²!\n", cidade1, estado1, area1);
            }
            break;
        case 3:
            printf("Atributo escolhido: PIB\n");
            if (pib1 == pib2) {
                printf("Empate!\n");
            } else if (pib1 > pib2) {
                printf("%s (%s) venceu com PIB %.2f bilhões de reais!\n", cidade1, estado1, pib1);
                printf("%s (%s) perdeu com PIB %.2f bilhões de reais!\n", cidade2, estado2, pib2);
            } else {
                printf("%s (%s) venceu com PIB %.2f bilhões de reais!\n", cidade2, estado2, pib2);
                printf("%s (%s) perdeu com PIB %.2f bilhões de reais!\n", cidade1, estado1, pib1);
            }
            break;
        case 4:
            printf("Atributo escolhido: Número de Pontos Turísticos\n");
            if (pontos_turisticos1 == pontos_turisticos2) {
                printf("Empate!\n");
            } else if (pontos_turisticos1 > pontos_turisticos2) {
                printf("%s (%s) venceu com %d pontos turísticos!\n", cidade1, estado1, pontos_turisticos1);
                printf("%s (%s) perdeu com %d pontos turísticos!\n", cidade2, estado2, pontos_turisticos2);
            } else {
                printf("%s (%s) venceu com %d pontos turísticos!\n", cidade2, estado2, pontos_turisticos2);
                printf("%s (%s) perdeu com %d pontos turísticos!\n", cidade1, estado1, pontos_turisticos1);
            }
            break;
        case 5:
            printf("Atributo escolhido: Densidade Demográfica\n");
            if (densidadeP1 == densidadeP2) {
                printf("Empate!\n");
            } else if (densidadeP1 < densidadeP2) {
                printf("%s (%s) venceu com densidade demográfica %.2f!\n", cidade1, estado1, densidadeP1);
                printf("%s (%s) perdeu com densidade demográfica %.2f!\n", cidade2, estado2, densidadeP2);
            } else {
                printf("%s (%s) venceu com densidade demográfica %.2f!\n", cidade2, estado2, densidadeP2);
                printf("%s (%s) perdeu com densidade demográfica %.2f!\n", cidade1, estado1, densidadeP1);
            }
            break;
        default:
            printf("Opção inválida! Nenhuma comparação foi realizada.\n");
            break;
    }

    return 0;
}