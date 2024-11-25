#include<stdio.h>
#include<stdio.h>
int main(){
float capital, juros_mensal,montante;
int periodo, mes;
printf("capital iniciado:");
scanf("%f, &capital ");
printf("taxa de juros( % ao juros):");
scanf("%f", &juros_mensal);
prinft("periodo (meses): ");
scanf("%d", &periodo);
juros_mensal /= 100; // converter para decimal
for (mes = 1; mes <= periodo; mes++){
    montante = capital * pow((1 + juros_mensal), mes);
    printf("%d° mes: R$ %.2f\n", mes, montante);
}
return 0;
}

