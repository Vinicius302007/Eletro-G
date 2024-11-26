#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // Para a função Sleep()

#define LARGURA 80
#define ALTURA 25

int main() {
    int x = 40, y = 12; // Posição inicial da bola
    int dx = 1, dy = 1; // Direções de movimento da bola

    while (1) {
        if (_kbhit()) { // Verifica se uma tecla foi pressionada
            char tecla = getch();
            if (tecla == 27) { // Se for ESC, o programa é encerrado
                break;
            }
        }

        // Atualiza a posição da bola
        x += dx;
        y += dy;

        // Verifica se a bola atingiu as bordas e inverte a direção
        if (x <= 0 || x >= LARGURA) {
            dx = -dx; // Inverte a direção horizontal
        }
        if (y <= 0 || y >= ALTURA) {
            dy = -dy; // Inverte a direção vertical
        }

        // Limpa a tela
        system("cls");

        // Posiciona o cursor na nova posição da bola e a desenha
        _gotoxy(x,y);
        printf("O");

        // Faz uma pausa para o movimento da bola
        Sleep(10); // Pausa de 10 milissegundos para controle de velocidade
    }

    return 0;
}
