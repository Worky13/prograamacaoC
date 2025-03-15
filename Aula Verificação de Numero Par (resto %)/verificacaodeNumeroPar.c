#include <stdio.h>

int main() {
  int numero = 4;

  /* operador % na linguagem C é conhecido como o operador de módulo ou resto da divisão inteira. Ele retorna o resto de uma divisão entre dois números inteiros, 
  por exemplo a % b. Quando você divide a por b, o operador % retorna o resto dessa divisão */
  if (numero % 2 == 0) { 
    printf("O número é par\n");
  }

  return 0;
}