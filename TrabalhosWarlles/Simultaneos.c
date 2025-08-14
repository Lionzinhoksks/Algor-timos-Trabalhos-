#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero, porDois, porTres;
    
    printf("---------------------SIMULTANEAMENTE---------------------\n\n");
    printf("\t\tDigite um número: ");
    scanf("%d", &numero);
    
    porDois = numero%2;
    porTres = numero%3;
    
    if(porDois == 0 && porTres == 0){
        printf("\nO número %d é divisível por 2 e 3 simultaneamente.", numero);
    }   else{
        printf("\nO número %d NÃO é divisível por 2 e 3 simultaneamente.", numero);
    }
    
    return 0;
}
