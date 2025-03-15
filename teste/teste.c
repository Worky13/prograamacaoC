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

    // Comparação das Cartas
    printf("\nComparação de Cartas:\n");

    // Escolha do atributo para comparação (definido no código)
    // Atributo escolhido: População
    char atributo_escolhido[] = "População";

    printf("Atributo escolhido: %s\n", atributo_escolhido);

    // Lógica de comparação
    if (populacao1 == populacao2) { // Empate no caso de mesmo valor (obs: usado essa maneira de estrutura, para no nivel simples não usar if else, apenas if ou else e ter a opção do empate)
        printf("Carta 1: %s (%s): %lu \n", cidade1, estado1, populacao1);
        printf("Carta 2: %s (%s): %u \n", cidade2, estado2, populacao2);
        printf("Resultado: Empate!\n");
    } else {
        if (populacao1 > populacao2) {
            printf("Carta 1: %s (%s): %lu \n", cidade1, estado1, populacao1);
            printf("Carta 2: %s (%s): %lu \n", cidade2, estado2, populacao2);
            printf("Resultado: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
        } else {
            printf("Carta 1: %s (%s): %lu \n", cidade1, estado1, populacao1);
            printf("Carta 2: %s (%s): %lu \n", cidade2, estado2, populacao2);
            printf("Resultado: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
        } 
    }

    return 0;
}