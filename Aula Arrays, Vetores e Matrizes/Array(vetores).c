#include <stdio.h>

/*
O que são arrays?
Também conhecidos como vetores, são uma das estruturas de dados fundamentais na programação. Eles permitem armazenar múltiplos valores 
do mesmo tipo em uma única variável, facilitando a organização e manipulação desses dados. Cada elemento do array pode ser acessado 
diretamente pelo seu índice, que começa em zero.
*/
 
int main() {
    int numeros[5];  // Declaração de um array de inteiros com 5 elementos
    return 0;
}

 
int main() {
         // indices   0   1   2   3   4
    int numeros[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores
    /*Nesse exemplo, o array numeros é inicializado com os valores 10, 20, 30, 40 e 50. Cada valor é atribuído a um elemento do array, 
    começando do índice 0 até o índice 4.*/
    return 0;
}


/*
Cada elemento de um array pode ser acessado diretamente pelo seu índice. Os índices dos arrays começam em 0. Vamos ver como acessar e 
imprimir elementos específicos de um array. Observe!
*/
int main() {
    int numeros[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores
 
    // Acessando e imprimindo elementos específicos do array
    printf("O primeiro elemento é %d\n", numeros[0]);  //numeros[0] acessa o primeiro elemento do array, que é 10. 
    printf("O terceiro elemento é %d\n", numeros[2]); // numeros[2] acessa o terceiro elemento do array, que é 30.
    printf("O quinto elemento é %d\n", numeros[4]); // numeros[4] acessa o quinto elemento do array, que é 50.
 
    return 0;
}



/*
Armazenamento de notas de alunos
Arrays podem ser usados para armazenar as notas de um grupo de alunos, facilitando o cálculo de médias e a verificação de 
desempenho. Veja o código a seguir.
*/

int main() {
    float notas[3] = {85.5, 90.0, 78.0};  // Array de notas de 3 alunos
 
    printf("Nota do primeiro aluno: %.1f\n", notas[0]);
    printf("Nota do segundo aluno: %.1f\n", notas[1]);
    printf("Nota do terceiro aluno: %.1f\n", notas[2]);
 
    return 0;
}



/*
Armazenamento de caracteres
Arrays também podem ser usados para armazenar caracteres, como letras ou palavras. Esse exemplo demonstra como criar e acessar 
um array de caracteres. Confira!
*/

int main() {
    char letras[4] = {'A', 'B', 'C', 'D'};  // Array de caracteres
 
    printf("Primeira letra: %c\n", letras[0]);
    printf("Segunda letra: %c\n", letras[1]);
    printf("Terceira letra: %c\n", letras[2]);
    printf("Quarta letra: %c\n", letras[3]);
 
    return 0;
}
