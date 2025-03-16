#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1[3] = "PR"; // Estado (ex: PR)
    char codigo1[4] = "A01"; // Código da Carta (ex: A01)
    char cidade1[50] = "Curitiba"; // Nome da Cidade
    unsigned long int populacao1 = 1933105; // População
    float area1 = 434.97; // Área (em km²)
    float pib1 = 100.00; // PIB (em bilhões de reais)
    int pontos_turisticos1 = 50; // Número de Pontos Turísticos
    float densidadeP1; // Densidade Populacional
    float pibpc1; // PIB per Capita

    // Variáveis para a segunda carta
    char estado2[3] = "SP";
    char codigo2[4] = "B02";
    char cidade2[50] = "São Paulo";
    unsigned long int populacao2 = 12325232;
    float area2 = 1521.11;
    float pib2 = 500.00;
    int pontos_turisticos2 = 200;
    float densidadeP2;
    float pibpc2;

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

    // Menu de escolha dos atributos para comparação
    int opcao1, opcao2;
    printf("\nMenu de Comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação: ");
    scanf("%d", &opcao1);

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro): ");
    scanf("%d", &opcao2);

    // Verificação se o segundo atributo é igual ao primeiro
    if (opcao2 == opcao1) {
        printf("Erro: O segundo atributo não pode ser igual ao primeiro. Encerrando o programa.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Variáveis para armazenar os valores dos atributos escolhidos
    float valor1_1, valor1_2; // Valores para a primeira carta
    float valor2_1, valor2_2; // Valores para a segunda carta

    // Atribuição dos valores com base na escolha do usuário
    switch (opcao1) {
        case 1:
            valor1_1 = (float) populacao1;
            valor2_1 = (float) populacao2;
            printf("\nAtributo 1 escolhido: População\n");
            break;
        case 2:
            valor1_1 = area1;
            valor2_1 = area2;
            printf("\nAtributo 1 escolhido: Área\n");
            break;
        case 3:
            valor1_1 = pib1;
            valor2_1 = pib2;
            printf("\nAtributo 1 escolhido: PIB\n");
            break;
        case 4:
            valor1_1 = (float) pontos_turisticos1;
            valor2_1 = (float) pontos_turisticos2;
            printf("\nAtributo 1 escolhido: Número de Pontos Turísticos\n");
            break;
        case 5:
            valor1_1 = densidadeP1;
            valor2_1 = densidadeP2;
            printf("\nAtributo 1 escolhido: Densidade Demográfica\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    switch (opcao2) {
        case 1:
            valor1_2 = (float) populacao1;
            valor2_2 = (float) populacao2;
            printf("Atributo 2 escolhido: População\n");
            break;
        case 2:
            valor1_2 = area1;
            valor2_2 = area2;
            printf("Atributo 2 escolhido: Área\n");
            break;
        case 3:
            valor1_2 = pib1;
            valor2_2 = pib2;
            printf("Atributo 2 escolhido: PIB\n");
            break;
        case 4:
            valor1_2 = (float) pontos_turisticos1;
            valor2_2 = (float) pontos_turisticos2;
            printf("Atributo 2 escolhido: Número de Pontos Turísticos\n");
            break;
        case 5:
            valor1_2 = densidadeP1;
            valor2_2 = densidadeP2;
            printf("Atributo 2 escolhido: Densidade Demográfica\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");

    // Comparação do primeiro atributo
    if (opcao1 == 5) {
        // Densidade Demográfica: o menor valor vence
        if (valor1_1 < valor2_1) {
            printf("%s (%s) venceu no atributo 1 com densidade demográfica %.2f!\n", cidade1, estado1, valor1_1);
            printf("%s (%s) perdeu no atributo 1 com densidade demográfica %.2f!\n", cidade2, estado2, valor2_1);
        } else if (valor1_1 > valor2_1) {
            printf("%s (%s) venceu no atributo 1 com densidade demográfica %.2f!\n", cidade2, estado2, valor2_1);
            printf("%s (%s) perdeu no atributo 1 com densidade demográfica %.2f!\n", cidade1, estado1, valor1_1);
        } else {
            printf("Empate no atributo 1 (Densidade Demográfica)!\n");
        }
    } else {
        // Outros atributos: o maior valor vence
        if (valor1_1 > valor2_1) {
            printf("%s (%s) venceu no atributo 1 com valor %.2f!\n", cidade1, estado1, valor1_1);
            printf("%s (%s) perdeu no atributo 1 com valor %.2f!\n", cidade2, estado2, valor2_1);
        } else if (valor1_1 < valor2_1) {
            printf("%s (%s) venceu no atributo 1 com valor %.2f!\n", cidade2, estado2, valor2_1);
            printf("%s (%s) perdeu no atributo 1 com valor %.2f!\n", cidade1, estado1, valor1_1);
        } else {
            printf("Empate no atributo 1!\n");
        }
    }

    // Comparação do segundo atributo
    if (opcao2 == 5) {
        // Densidade Demográfica
        if (valor1_2 < valor2_2) {
            printf("%s (%s) venceu no atributo 2 com densidade demográfica %.2f!\n", cidade1, estado1, valor1_2);
            printf("%s (%s) perdeu no atributo 2 com densidade demográfica %.2f!\n", cidade2, estado2, valor2_2);
        } else if (valor1_2 > valor2_2) {
            printf("%s (%s) venceu no atributo 2 com densidade demográfica %.2f!\n", cidade2, estado2, valor2_2);
            printf("%s (%s) perdeu no atributo 2 com densidade demográfica %.2f!\n", cidade1, estado1, valor1_2);
        } else {
            printf("Empate no atributo 2 (Densidade Demográfica)!\n");
        }
    } else {
        // Outros atributos
        if (valor1_2 > valor2_2) {
            printf("%s (%s) venceu no atributo 2 com valor %.2f!\n", cidade1, estado1, valor1_2);
            printf("%s (%s) perdeu no atributo 2 com valor %.2f!\n", cidade2, estado2, valor2_2);
        } else if (valor1_2 < valor2_2) {
            printf("%s (%s) venceu no atributo 2 com valor %.2f!\n", cidade2, estado2, valor2_2);
            printf("%s (%s) perdeu no atributo 2 com valor %.2f!\n", cidade1, estado1, valor1_2);
        } else {
            printf("Empate no atributo 2!\n");
        }
    }

    // Soma dos atributos escolhidos
    float soma1 = valor1_1 + valor1_2;
    float soma2 = valor2_1 + valor2_2;

    printf("\nSoma dos atributos:\n");
    printf("%s (%s): %.2f\n", cidade1, estado1, soma1);
    printf("%s (%s): %.2f\n", cidade2, estado2, soma2);

    // Comparação das somas dos atributos escolhidos
    if (soma1 == soma2) {
        printf("\nEmpate!\n");
    } else{
        printf("\n%s (%s) venceu a rodada!\n", (soma1 > soma2) ? cidade1 : cidade2, (soma1 > soma2) ? estado1 : estado2);
    }

    return 0;
}