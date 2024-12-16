#include <stdio.h>

void saudacao(int hora) {
    if (hora >= 6 && hora < 12) {
        printf("Bom dia!\n");
    } else if (hora >= 12 && hora < 18) {
        printf("Boa tarde!\n");
    } else if (hora >= 18 && hora < 24) {
        printf("Boa noite!\n");
    } else {
        printf("Hora invalida!\n");
    }
}

int main() {
    int hora;
    printf("Digite a hora atual (0 a 23): ");
    scanf("%d", &hora);
    
    saudacao(hora);
    
    return 0;
}
