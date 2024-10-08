#include<stdio.h>
int main(){
float km;
float combustivel;
float consumo;
printf ("indique o combustivel:");
scanf("%f",&combustivel);

printf("digire o km:");
scanf("%f , &km");
consumo = km/combustivel ;
printf("km e:%f combustivo e: %f consumo e %f ,km, combustivel,consumo");
}