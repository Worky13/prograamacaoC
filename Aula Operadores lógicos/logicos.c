/*
E Lógico (&&)
Descrição: o operador && retorna verdadeiro se e somente se ambas as expressões que ele conecta forem verdadeiras. Se qualquer uma das expressões for falsa, 
o resultado será falso.
Sintaxe: expressao1 && expressao2
Exemplo:
if (a > 0 && b > 0) {
    printf("Ambos são positivos.\n");
  }
Nesse exemplo, a mensagem será impressa apenas se tanto a quanto b forem maiores que 0.


OU Lógico (II)
Descrição: o operador || retorna verdadeiro se pelo menos uma das expressões que ele conecta for verdadeira. Se ambas as expressões forem falsas, o resultado será falso.
Sintaxe: expressao1 || expressao2
Exemplo:
if (a > 0 || b > 0) {
  printf("Pelo menos um é positivo.\n");
}
Nesse exemplo, a mensagem será impressa se a ou b (ou ambos) forem maiores que 0.


NÃO Lógico (!)
Descrição: o operador ! inverte o valor lógico de uma expressão. Se a expressão for verdadeira, ele retorna falso, e se a expressão for falsa, ele retorna verdadeiro.
Sintaxe: !expressao
Exemplo:
int a = -5;
if (!(a > 0)) {
 printf("a não é um número positivo\n");
}
Neste exemplo, a = -5 então na condição a > 0 ele é falso. Mas devido o operador !(não logico) o resultado de !(a > 0) é verdadeiro.


Exemplo do uso dos operadores && e || juntos:
#include <stdio.h>
int main() {
  int a = 5;
  int b = -10;
  int c = 0;

  if (a > 0 && b < 0 || c == 0) {
    printf("A condição é verdadeira\n");
  } else {
    printf("A condição é falsa\n");
  }

  return 0;
}

*/