#include <stdio.h>

int main() {
    int operacao;
    
    printf("Informe a operação (1 - saldo, 2 - extrato, 3 - saque, 4 - sair): ");
    scanf("%d", &operacao);
    
    switch (operacao) {
        case 1:
            printf("Saldo\n");
            break;
        case 2:
            printf("Extrato\n");
            break;
        case 3:
            printf("Saque\n");
            break;
        case 4:
            printf("Sair\n");
            break;
        default:
            printf("Opção inválida.\n");
    }
    
    return 0;
}