#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int Numero, Result;

int main()
{
    printf("Informe/Digite um número: ");
    scanf("%d", &Numero);
    
    Result = Numero%2;

    if( Result == 0 ) {
        printf("Este número é PAR.\n");
    } else {
        printf("Este número é ÍMPAR.\n");

    }

    return 0;
}