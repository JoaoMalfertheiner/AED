#include <stdio.h>

int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    int duracao_horas, duracao_minutos;
    
    // Leitura dos valores de entrada
    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);
    
    // Converter tudo para minutos
    int inicio = hora_inicial * 60 + minuto_inicial;
    int fim = hora_final * 60 + minuto_final;
    
    // Se a hora final for menor ou igual à inicial, significa que o jogo passou da meia-noite
    if (fim <= inicio) {
        fim += 24 * 60; // Adiciona um dia em minutos
    }
    
    // Calcula a duração em minutos
    int duracao_total = fim - inicio;
    duracao_horas = duracao_total / 60;
    duracao_minutos = duracao_total % 60;
    
    // Exibe o resultado
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);
    
    return 0;
}
