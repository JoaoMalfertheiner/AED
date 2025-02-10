#include <stdio.h>

int main() {
    int m, n;
    
    while (1) {
        // Leitura dos valores
        scanf("%d %d", &m, &n);
        
        // Parar quando um dos valores for menor ou igual a zero
        if (m <= 0 || n <= 0) {
            break;
        }
        
        // Garantir que m seja o menor e n o maior
        if (m > n) {
            int temp = m;
            m = n;
            n = temp;
        }
        
        int soma = 0;
        
        // Imprimir sequência e calcular soma
        for (int i = m; i <= n; i++) {
            printf("%d ", i);
            soma += i;
        }
        
        printf("Sum=%d\n", soma);
    }
    
    return 0;
}
