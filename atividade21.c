#include <stdio.h>

// Função para calcular o MDC usando o algoritmo de Euclides
int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Função para calcular o MMC
int mmc(int x, int y) {
    return (x * y) / mdc(x, y);  // Calcula o MMC usando a fórmula
}

int main() {
    int x, y;

    // Leitura dos valores de x e y
    printf("Digite o valor de x (horas do primeiro alarme): ");
    scanf("%d", &x);
    printf("Digite o valor de y (horas do segundo alarme): ");
    scanf("%d", &y);

    // Cálculo do tempo mínimo para os dois alarmes dispararem simultaneamente
    int tempo_minimo = mmc(x, y);

    // Exibe o resultado
    printf("O tempo mínimo para que os dois alarmes disparem simultaneamente é: %d horas\n", tempo_minimo);

    return 0;
}


