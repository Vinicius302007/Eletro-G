#include <stdio.h>

void dia_da_semana(int n) {
    switch(n) {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-feira\n"); break;
        case 3: printf("Terca-feira\n"); break;
        case 4: printf("Quarta-feira\n"); break;
        case 5: printf("Quinta-feira\n"); break;
        case 6: printf("Sexta-feira\n"); break;
        case 7: printf("Sabado\n"); break;
        default: printf("Dia invalido\n"); break;
    }
}

int main() {
    int n;
    printf("Digite um numero de 1 a 7 para saber o dia da semana: ");
    scanf("%d", &n);
    
    dia_da_semana(n);
    
    return 0;
}

