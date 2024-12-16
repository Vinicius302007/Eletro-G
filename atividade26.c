#include <stdio.h>

float media_ponderada(float nota1, float nota2, float peso1, float peso2) {
    if (peso1 + peso2 != 1) {
        printf("A soma dos pesos deve ser igual a 1.\n");
        return -1; // Erro
    }
    return (nota1 * peso1 + nota2 * peso2);
}

int main() {
    float nota1, nota2, peso1, peso2;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);
    
    float media = media_ponderada(nota1, nota2, peso1, peso2);
    if (media != -1) {
        printf("A media ponderada eh: %.2f\n", media);
    }
    
    return 0;
}

