#include <stdio.h>

int main() {
    int a, b, q, r;
    
    // Leitura dos dois inteiros
    scanf("%d %d", &a, &b);
    
    // Garantindo que b não seja zero (evita divisão por zero)
    if (b == 0) {
        return 1;
    }
    
    // Calculando o quociente e o resto garantindo as condições do teorema
    q = a / b;
    r = a % b;
    
    if (r < 0) { // Garante que 0 ≤ r < |b|
        if (b > 0) {
            q -= 1;
            r += b;
        } else {
            q += 1;
            r -= b;
        }
    }
    
    // Saída do resultado
    printf("%d %d\n", q, r);
    
    return 0;
}
