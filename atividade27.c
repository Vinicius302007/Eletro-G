#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);
    
    printf("O fatorial de %d eh: %d\n", n, fatorial(n));
    
    return 0;
}

