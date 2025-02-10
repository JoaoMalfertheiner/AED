#include <stdio.h>

int main() {
    int x, y, soma = 0;
    
    // Leitura dos valores
    scanf("%d %d", &x, &y);
    
    // Garantir que x seja o menor e y o maior
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    // Iterar entre os valores e somar os que não são múltiplos de 13
    for (int i = x; i <= y; i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }
    
    // Saída do resultado
    printf("%d\n", soma);
    
    return 0;
}
