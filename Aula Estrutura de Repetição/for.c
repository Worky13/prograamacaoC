#include <stdio.h>
 
/*
A estrutura "for" é uma das mais utilizadas na programação devido à sua capacidade de simplificar a execução de loops com 
um número específico de iterações. Diferentemente dos loops while e do-while, que se baseiam exclusivamente em uma condição, 
o for é especialmente útil quando se sabe de antemão quantas vezes o loop deve ser executado.
}
*/

int main() {
    for (int i = 1; i <= 20; i++) { //Veja agora o loop for sendo usado para imprimir todos os números pares de 1 a 20.
        if (i % 2 == 0) {  //Nesse caso, a condição if (i % 2 == 0) verifica se i é par. Se for, o valor de i é impresso.
            printf("%d\n", i);
        }
    }
   
    return 0;
}