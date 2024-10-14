#include <stdio.h>

int main() {
    int total_produzido, total_defeituoso;
    float porcentagem;

   
    printf("Digite o total de peças produzidas: ");
    scanf("%d", &total_produzido);
    printf("Digite o total de peças defeituosas: ");
    scanf("%d", &total_defeituoso);


    porcentagem = ((float)total_defeituoso / total_produzido) * 100;

   
    if (porcentagem > 10) {
        printf("A máquina precisa de manutenção.\n");
    } 
    else {
        printf("A máquina não precisa de manutenção.\n");
    }

}
