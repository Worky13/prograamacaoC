#include <stdio.h>
 
int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);
    return 0;
}

/*
O loop externo controla as linhas (multiplicando), e o loop interno controla as colunas (multiplicador). 
Para cada par de valores (i, j), a multiplicação é realizada e o resultado é impresso.
*/