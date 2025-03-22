#include <stdio.h>
 
/*
Recursividade
É um conceito importante em programação, em que uma função chama a si mesma para resolver problemas de forma mais simples e eficiente.
Recursividade é uma técnica que pode ser usada para substituir loops, dividir problemas complexos em partes menores e simplificar a lógica de muitos algoritmos.
*/

// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) { // definiu uma variavel local
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
    }
}
 
int main() {
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero); // de um valor a váriavel
    return 0;
}

/*
Observação:
Quando eu uso a função de impressão (printf) depois da recursividade ela executa de forma inversa, em vez de 5 4 3 2 1, será impresso 1 2 3 4 5.
if (n > 0) {
    recursiveLoop(n - 1);
    printf("%d ", n);
}
Isso ocorre porque primeiro o programa calcula todo o decremento, para depois imprimir. Nesse sentido ele irá imprimir o ultimo calculo como o primeiro na fila.
recursividade(5-1)                        -
    recursividade(4-1)
        recursividade(3-1)
            recursividade(2-1)
                recursividade(1-1)        - ultimo valor calculado
                print(recursividade(1))   - primeira impressão da fila
            print(recursividade(2))
        print(recursividade(3))
    print(recursividade(4))
print(recursividade(5))

Isso é chamado de pilha de informação
*/
