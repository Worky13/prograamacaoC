#include <stdio.h>

int main() {
  int idade = 20;
  char* resultado;

  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

  printf("Resultado: %s\n", resultado);

  return 0;
}
/*
Nesse exemplo, declaramos uma variável idade com o valor 20. Usamos o operador ternário para verificar se idade é maior ou igual a 18.
Se for, resultado recebe a string "Maior de idade"; caso contrário, recebe "Menor de idade". O programa então imprime o resultado que, 
nesse caso, será “Maior de idade”.
*/



#include <stdio.h>

int main() {
  int num1 = 10, num2 = 20;
  int maior;

  maior = (num1 > num2) ? num1 : num2;

  printf("O maior número é: %d\n", maior);

  return 0;
}
/*
Nesse exemplo, temos duas variáveis, num1 e num2, com os valores 10 e 20, respectivamente. Usamos o operador ternário para verificar qual 
dos dois números é maior. Se num1 for maior que num2, maior recebe o valor de num1; caso contrário, recebe o valor de num2. O programa 
imprime 'O maior número é: 20'.
O operador ternário é uma ferramenta útil em C que permite simplificar instruções if-else em uma única linha de código. O operador ternário 
torna o código mais conciso e legível, especialmente quando a lógica de decisão é simples.
*/