#include <stdio.h>
 
int main() {
    int idade = 25;  // Declara uma variável inteira chamada "idade"
    float altura = 1.75; // Declara uma variável de ponto flutuante chamada "altura"
    double salario = 12345.67; // Declara uma variável de ponto flutuante de dupla precisão chamada "salario"
    char inicial = 'A'; // Declara uma variável de caractere chamada "inicial" Observação: no tipo de várial char usamos aspas simples para declarar uma letra
    char nome[20] = "Alice";  // Declara uma String (texto) de 20 caracteres e inicializa com "Alice"
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura); //o especificador %f, quando escrito como %.2f limita o número de casas decimais em duas
    printf("Salario: %.2f reais\n", salario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    return 0;
/*
Lista dos principais especificadores utilizados:

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
*/
   
}