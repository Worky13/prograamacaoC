#include <stdio.h>
 
/*
Procedimentos
São blocos de código que realizam uma tarefa específica, mas não retornam um valor. Eles são definidos com um tipo de retorno void e podem ter parâmetros opcionais.
*/


// Definição de procedimento para imprimir uma mensagem
void imprimirMensagem() {
    printf("Olá, mundo!\n");
}
 
int main() {
    // Chamada do procedimento
    imprimirMensagem();
    return 0;
}