#include <stdio.h>

void verificar_par(int n) {
    if (n % 2 == 0) {
        printf("O numero %d eh par.\n", n);
    } else {
        printf("O numero %d nao eh par.\n", n);
    }
}

int main() {
    int n;
    printf("Digite um numero para verificar se eh par: ");
    scanf("%d", &n);
    
    verificar_par(n);
    
    return 0;
}

