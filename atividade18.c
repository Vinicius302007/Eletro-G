#include <stdio.h>
#include <conio.h>  // Biblioteca para _gotoxy
#include <time.h>   // Biblioteca para _sleep

int main() {
    int hora, minuto;
    while (1) {
        // Pega o horário atual
        time_t t;
        struct tm * tm_info;

        time(&t);
        tm_info = localtime(&t);

        hora = tm_info->tm_hour;
        minuto = tm_info->tm_min;

        // Posiciona o cursor no ponto fixo da tela (coluna 10, linha 5 por exemplo)
        _gotoxy(10, 5);

        // Exibe o horário no formato 00:00
        printf("%02d:%02d", hora, minuto);

        // Pausa por 1 segundo (1000 milissegundos)
        _sleep(1);
    }

    
}
