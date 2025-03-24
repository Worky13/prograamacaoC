#include <stdio.h>
 
int main() {
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int matrizSoma[2][2];
 
    // Somando as duas matrizes
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
 
    // Exibindo a matriz resultante
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);
        }
    }
 
    return 0;
}

/*
Vamos entender o que o código faz:
Declaração e inicialização: As matrizes matriz1 e matriz2 são declaradas e inicializadas com valores.
Soma das matrizes: Usamos dois loops for aninhados para percorrer cada elemento das matrizes. Para cada posição [i][j], 
somamos os valores correspondentes de matriz1 e matriz2, armazenando o resultado em matrizSoma.
Exibição da matriz resultante: Por fim, usamos outro conjunto de loops for aninhado para percorrer matrizSoma e imprimir 
seus elementos, mostrando a matriz resultante da soma.

 */