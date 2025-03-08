#include <stdio.h>

int main(){
    char nome[20];
    char sobrenome[50];
   
    //Lendo Strings com Espaços: fgets
    printf("Digite seu nome completo: ");
    fgets(sobrenome, sizeof(sobrenome), stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)
    
    //fgets inclui o '\n' na string, então podemos removê-lo se necessário
    sobrenome[strcspn(sobrenome, "\n")] = '\0';
     
    printf("Nome completo digitado: %s\n", sobrenome);


    //Lendo Strings sem Espaços: scanf
    printf("Digite seu nome:");
    scanf("%s", &nome);
    printf("Seu nome é: %s\n", nome);


    return 0;


}