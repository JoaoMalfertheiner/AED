#include <stdio.h>

int main(){
    float nota1, nota2;
    int notasValidas = 0;
    
    while (notasValidas < 2){
        scanf("%f", &nota1);
        if (nota1 >= 0 && nota1<= 10){
            notasValidas++;
            if (notasValidas == 1){
                while (notasValidas < 2){
                    scanf("%f", &nota2);
                    if (nota2 >= 0 && nota2 <= 10){
                        notasValidas++;
                    } else {
                        printf("nota invalida\n");
                    }
                }
            }
        } else {
            printf("nota invalida\n");
        }
    }
    float media = (nota1 + nota2) / 2.0;
    printf("media = %.2f\n", media);
    
    return 0;
}
