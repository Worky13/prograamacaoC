#include <stdio.h>
 
int main() {
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

/*
O loop externo controla as linhas (multiplicando), e o loop interno controla as colunas (multiplicador). 
Para cada par de valores (i, j), a multiplicação é realizada e o resultado é impresso.
*/