#include <stdio.h>
#include "tabuleiro.h"

void mostrar_tabuleiro(char tabuleiro[3][3]) {

    printf("\n");

    for (int i = 0; i < 3; i++) {

        printf(" %c | %c | %c \n",
               tabuleiro[i][0],
               tabuleiro[i][1],
               tabuleiro[i][2]);

        if (i < 2) {
            printf("---+---+---\n");
        }
    }

    printf("\n");
}

int verificavitoria(char tabuleiro[3][3]) {

    for (int i = 0; i < 3; i++) {

        if (tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2]) {

            return 1;
        }
    }

    for (int i = 0; i < 3; i++) {

        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) {

            return 1;
        }
    }

    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {

        return 1;
    }

    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {

        return 1;
    }

    return 0;
}