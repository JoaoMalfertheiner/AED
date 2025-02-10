#include <stdio.h>

int main() {
    int N, quantia, total = 0, totalCoelhos = 0, totalRatos = 0, totalSapos = 0;
    char tipo;
    
    // Leitura do número de casos de teste
    scanf("%d", &N);
    
    // Loop para processar os casos de teste
    for (int i = 0; i < N; i++) {
        scanf("%d %c", &quantia, &tipo);
        total += quantia;
        
        if (tipo == 'C') {
            totalCoelhos += quantia;
        } else if (tipo == 'R') {
            totalRatos += quantia;
        } else if (tipo == 'S') {
            totalSapos += quantia;
        }
    }
    
    // Cálculo das porcentagens
    double percCoelhos = (totalCoelhos * 100.0) / total;
    double percRatos = (totalRatos * 100.0) / total;
    double percSapos = (totalSapos * 100.0) / total;
    
    // Exibição dos resultados
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalCoelhos);
    printf("Total de ratos: %d\n", totalRatos);
    printf("Total de sapos: %d\n", totalSapos);
    printf("Percentual de coelhos: %.2lf %%\n", percCoelhos);
    printf("Percentual de ratos: %.2lf %%\n", percRatos);
    printf("Percentual de sapos: %.2lf %%\n", percSapos);
    
    return 0;
}
