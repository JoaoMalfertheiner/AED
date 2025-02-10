#include <stdio.h>

int main(void) {
    char operacao;
    double matriz[12][12], soma = 0.0;
    int i, j, count = 0;
    
    // Lendo a operação
    scanf(" %c", &operacao);
    
    // Lendo a matriz
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    // Calculando a soma dos elementos acima da diagonal principal
    for (i = 0; i < 12; i++) {
        for (j = i + 1; j < 12; j++) {
            soma += matriz[i][j];
            count++;
        }
    }
    
    // Exibindo o resultado conforme a operação
    if (operacao == 'S') {
        printf("%.1lf\n", soma);
    } else if (operacao == 'M') {
        printf("%.1lf\n", soma / count);
    }
    
    return 0;
}
