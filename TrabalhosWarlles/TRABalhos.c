#include <stdio.h>
#include <stdlib.h>

int Dia, Mes, Ano;


int main() {
    printf("Informe um Dia(dd): ", "\n");
    scanf("%d", &Dia);
    printf("Informe um Mês(mm): ", "\n");
    scanf("%d", &Mes);
    printf("Informe um Ano(aaaa): ", "\n");
    scanf("%d", &Ano);
    
    if(Dia <= 31 && Mes <= 12 || Dia <= 0 || Mes <= 0 || Ano <= 0) {
        printf("A data informada é: %.2d/%.2d/%d", Dia, Mes, Ano, "\n");
    } else {
        printf("Esta data é inválida, insira uma data válida.\n");
    }
    
    
    return 0;
}
