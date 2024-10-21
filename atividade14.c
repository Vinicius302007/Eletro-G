#include <stdio.h>

int main() {
    int ano, soma, resto;
    
    printf("Informe seu ano de nascimento: ");
    scanf("%d", &ano);
    
    soma = ano / 100 + ano % 100;
    resto = soma % 5;
    
    switch (resto) {
        case 0:
            printf("Perfil: tímido\n");
            break;
        case 1:
            printf("Perfil: sonhador\n");
            break;
        case 2:
            printf("Perfil: paquerador\n");
            break;
        case 3:
            printf("Perfil: atraente\n");
            break;
        case 4:
            printf("Perfil: irresistível\n");
            break;
    }
    
    
}