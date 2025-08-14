#include <stdio.h>
#include <stdlib.h>


int main(){

    float numero1, numero2, soma, subtracao, multiplicacao, divisao; 
    int option;


    printf("------------------Calculadora: 4 Operações------------------\n\n");
    printf("Oque deseja fazer? \n 1.Soma\n 2.Subtração\n 3.Multiplicação\n 4.Divisão\n\n");
    printf("\t--------------->\t");
    scanf("%i", &option);
    
    if(option >= 1 && option <= 4) {
    
    printf("\nInsira o primeiro número: ");
    scanf("%f", &numero1);
    printf("Insira o segundo número: ");
    scanf("%f", &numero2);
    
    
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;
    
    
    if(option == 1) {
        /* Soma */
        printf("\nA soma entre o %.0f e %.0f é: %.0f .", numero1, numero2, soma);
    } if(option == 2) {
        /* Subtração */
        printf("\nA subtração entre o %.0f e %.0f é: %.0f .", numero1, numero2, subtracao);
    } if(option == 3) {
        /* Multiplicação */
        printf("\nA soma entre o %.0f e %.0f é: %.0f .", numero1, numero2, multiplicacao);
    } if(option == 4) {
        /* Divisão */
        printf("\nA divisao entre %.0f e %.0f é: %.1f .", numero1, numero2, divisao);
    }
    
    } else {
        printf("\n\tEssa opção NÃO existe!!!");
    }

    return 0;

}
