#include <stdio.h>
#include <stdlib.h>

float Litrosconsumidos, Quilometrospercorridos, Media;

int main() {
    printf("Informe a quantidade de Litros(L) consumidos pelo carro:\n");
    scanf("%f", &Litrosconsumidos);
    printf("Informe a quantidade de Quilometros(Km) percorridos:\n");
    scanf("%f", &Quilometrospercorridos);
    
    Media = (Quilometrospercorridos) / Litrosconsumidos;
    
    printf("-----------------------------------------------------------\n");
    printf("A Média de Quilometros que este carro fez foi de: %f", Media);
    
    
    return 0;
}