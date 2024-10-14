#include<stdio.h>

int main(void){
    int quantidadepaginas;
    float totalserpago;
    printf ("digite a quantidsade de paginas:");
    scanf ("%d", &quantidadepaginas);
if (quantidadepaginas > 100)
{
totalserpago = quantidadepaginas*0.20;
printf ("total a ser pago : R$ %.2f\n\n\n" , totalserpago);
}

else  

{
totalserpago = quantidadepaginas*0.25;
printf ("total a ser pago : R$ %.2f\n\n\n" , totalserpago);
}
}