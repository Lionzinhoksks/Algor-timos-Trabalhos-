#include <stdio.h>
#include <stdlib.h>



int main() {
    printf("-----------------------Quadrado(x²) / Cubo(x³)----------------------\n\n");
    for(int n = 0; n <= 10; n++) {
        printf("Número: \t Quadrado do Número(x²): \t\t\t Cubo do Número(x³): \n %d \t\t\t\t\t\t\t %d \t\t\t\t\t\t\t %d \n", n, n * n, n * n * n);
    }
    return 0;
}
