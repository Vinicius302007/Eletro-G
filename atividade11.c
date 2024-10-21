#include <stdio.h>

int main() {
char estados;

printf("digite a letra:");
scanf("%c", &estados);

if (estados == 's'){
    printf("ela sera solteiro");
}
if (estados == 'c'){
    printf("ele sera casado");
}
if (estados == "d"){
    printf("ele sera divorciado");
}
if (estados == "v"){
    printf("ele sera viuvo");
    }
}