#include <stdio.h>

int main() {
    int n;
    
    // Leitura do valor de N
    scanf("%d", &n);
    
    // Verificação da restrição
    if (n > 2 && n < 1000) {
        // Impressão da tabuada de N
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", i, n, i * n);
        }
    }
    
    return 0;
}
