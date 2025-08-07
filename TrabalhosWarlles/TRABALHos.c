#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
    int numnormal;
    
    
    printf("----------ProGRAMa----------\n\n");
    printf("Informe um número de 5 Dígitos, que seja Inteiro Positivo: ");
    scanf("%d", &numnormal);
    
    if(numnormal >= 10000 && numnormal <= 99999) {
        
        int digito1 = numnormal / 10000;
        int digito2 = (numnormal / 1000) % 10;
        int digito3 = (numnormal / 100) % 10;
        int digito4 = (numnormal / 10) % 10;
        int digito5 = numnormal % 10;
        
        printf("%d", digito1);
        printf("...%d", digito2);
        printf("...%d", digito3);
        printf("...%d", digito4);
        printf("...%d\n", digito5);
        
    }else {
        
        printf("##MATH-ERRORRRR##, insira um númerro de 5 Dígitos.");
        
    }
    
    return 0;
    
}