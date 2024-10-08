#include<stdio.h>
int main(){
 int imc;
int peso;
 float altura; 
printf ("indique seu peso:");
scanf("%d",&peso);
printf("digite sua altura:");
scanf("%f ,&altura");
imc = peso/(altura*altura);
printf("%d",imc);
}