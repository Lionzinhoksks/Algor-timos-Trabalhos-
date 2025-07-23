#include <stdio.h>
#include <stdlib.h>

int Dia, Mes, Ano;
char resposta, Y, y, n;


int main() {
    printf("Informe um Dia(dd): ", "\n");
    scanf("%d", &Dia);
    printf("Informe um Mês(mm): ", "\n");
    scanf("%d", &Mes);
    printf("Informe um Ano(aaaa): ", "\n");
    scanf("%d", &Ano);
    printf("A data informada é: %.2d/%.2d/%d\n", Ano, Mes, Dia);
    
    if(Dia <= 31 && Mes <= 12) {
        printf("A data informada é: %.2d/%.2d/%d\n", Dia, Mes, Ano);
    } else {
        printf("Esta data é inválida, insira uma data válida.");
    }
    
    
    return 0;