#include <stdio.h>

/*
O que são matrizes?
São uma generalização dos arrays. Enquanto um array é unidimensional, uma matriz pode ter duas ou mais dimensões. 
A matriz bidimensional, a mais comum, é essencialmente uma tabela ou grade de valores em que cada elemento é acessado 
por dois índices: um para a linha e outro para a coluna.
*/

/*
Definição e inicialização de matrizes
Uma matriz bidimensional de inteiros pode ser definida da seguinte forma. Confira!
*/

int main() {
    int matriz[3][3];  // Declaração de uma matriz 3x3 de inteiros
 
    // Inicializando os elementos da matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
 
    // Acessando elementos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n", matriz[1][1]);
 
    return 0;
}


/*
Inicialização simplificada
Semelhante aos vetores, você pode inicializar uma matriz ao mesmo tempo em que a declara:
*/
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

/*
Acessando elementos de uma matriz
Cada elemento de uma matriz pode ser acessado diretamente pelos seus índices de linha e coluna. 
Vamos ver como acessar e imprimir elementos específicos de uma matriz. Veja!
*/
int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
 
    // Acessando e imprimindo elementos específicos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n", matriz[1][1]);
    printf("O elemento na posição [2][2] é %d\n", matriz[2][2]);
 
    return 0;
}

/*
Cada elemento da matriz é acessado por meio de índices que especificam sua posição, onde o primeiro índice indica 
a linha e o segundo índice indica a coluna. Por exemplo, matriz[0][0] se refere ao elemento na primeira linha e 
primeira coluna.
*/


/*
Considerações importantes:

Tamanho fixo
Em C, matrizes têm tamanho fixo determinado no momento da sua declaração. O tamanho não pode ser alterado em tempo de execução.

Acesso por índice
O acesso aos elementos é feito por índices, que começam em zero. É importante garantir que os índices utilizados estejam dentro 
dos limites do vetor ou matriz para evitar comportamento indefinido.

Acesso por índice
O acesso aos elementos é feito por índices, que começam em zero. É importante garantir que os índices utilizados estejam dentro 
dos limites do vetor ou matriz para evitar comportamento indefinido.
*/