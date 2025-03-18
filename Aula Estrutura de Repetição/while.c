#include <stdio.h>
 
int main() {
    int i = 1; //a variável i é inicializada com o valor 1.

    /*
    O loop while verifica a condição i <= 5. Enquanto essa condição for verdadeira, o loop continuará sendo executado. 
    Dentro do loop, o valor de i é impresso e, em seguida, incrementado em 1. Quando i se torna 6, a condição i <= 5 se 
    torna falsa, e o loop termina.
    */
   
    while (i <= 5) {
        printf("%d\n", i);
        i++; //acréscimo de valor 1 a variavel
    }
   
    return 0;
}


/*
Utilização de loops while para leitura de dados

Outra aplicação comum de loops while é na leitura de dados até que uma condição de parada seja encontrada. Por exemplo, 
podemos usar um while para ler números do usuário até que ele insira um número negativo. Observe!
Importante: antes de você executar o código é necessário que sejam inseridos os valores a serem lidos no campo input, 
um número por linha, e o último número deve ser negativo para que o loop seja interrompido.
*/
 
int main() {
    int num;
   
    printf("Digite um número (negativo para sair): \n");
    scanf("%d", &num);
   
    while (num >= 0) {
        printf("Você digitou: %d\n", num);
       
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);
    }
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}