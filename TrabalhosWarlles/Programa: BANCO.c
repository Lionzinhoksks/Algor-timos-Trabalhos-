#include <stdio.h>
#include <stdlib.h>

int main() {

    int short suaIdade;
    int montante;
    int long numeroConta;
    printf("---------------------Programa: BANCO---------------------\n\n");
    printf("Informe sua idade: ");
    scanf("%d", &suaIdade);
    printf("\n\n");
    
    if(suaIdade >= 18 && suaIdade <100) {
        printf("\t\tACESSO-CONCEDIDO!\n\n");
    
        printf("\nInforme a número da conta a qual irá depositar o valor: ");
        scanf("%d", &numeroConta);
        printf("\n");
    
        printf("\tConta acessada: %d", numeroConta);
        printf("\n");
    
        printf("\nInforme o valor a depositar: ");
        scanf("%d", &montante);
    
        printf("\n\tFoi depositado R$ %.d na conta: %d.", montante, numeroConta);
        } else{
            
            printf("\t\tAcESso nEGAdO!!!");
    }
    
    return 0;
}
