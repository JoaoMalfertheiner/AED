#include <stdio.h>

int main() {
    int A, B;
    
    // Leitura dos valores inteiros
    scanf("%d %d", &A, &B);
    
    // Verifica se são múltiplos
    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }
    
    return 0;
}
