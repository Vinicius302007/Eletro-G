#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char op;
    
    printf("Informe o primeiro número: ");
    scanf("%f", &num1);
    printf("Informe o segundo número: ");
    scanf("%f", &num2);
    printf("Informe a operação (+, -, *, /): ");
    scanf(" %c", &op);
    
    switch (op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Divisão por zero não é permitida.\n");
                return 1;
            }
            break;
        default:
            printf("Operação inválida.\n");
            return 1;
    }
    
    printf("Resultado: %.2f\n", resultado);
    return 0;
}