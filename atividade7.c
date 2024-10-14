#include <stdio.h>

int main() {
    int idade;

   
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

   
    if (idade <= 10) {
        printf("Categoria: Infantil\n");
    } else if (idade <= 17) {
        printf("Categoria: Juvenil\n");
    } else {
        printf("Categoria: Sênior\n");
    }

    return 0;
}