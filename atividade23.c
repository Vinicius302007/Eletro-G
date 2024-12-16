#include <stdio.h>

void contagem_regressiva(int n) {
    while (n >= 0) {
        printf("%d\n", n);
        n--;
    }
}

int main() {
    int n;
    printf("Digite um numero para iniciar a contagem regressiva: ");
    scanf("%d", &n);
    
    contagem_regressiva(n);
    
    return 0;
}

