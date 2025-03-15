#include <stdio.h>

int main() {
  int dia = 3;

  switch (dia) {
    case 1:
      printf("Domingo\n");
      break; //o break é para finalizar a operação do código a ser executado na escolha
    case 2:
      printf("Segunda-feira\n");
      break;
    case 3:
      printf("Terça-feira\n");
      break;
    case 4:
      printf("Quarta-feira\n");
      break;
    case 5:
      printf("Quinta-feira\n");
      break;
    case 6:
      printf("Sexta-feira\n");
      break;
    case 7:
      printf("Sábado\n");
      break;
    default: //o default é a operação a ser executada se o valor da variavel, não atender nenhuma das opções case
      printf("Dia inválido\n");
  }

  return 0;
}