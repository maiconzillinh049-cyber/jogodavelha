#include <stdio.h>
#include "jogo.h"
#include "tabuleiro.h"

int iniciar_jogo(struct Jogador jogadores[]) {

    char tabuleiro[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    int jogada = 0;
    int jogadorAtual = 0;
    int posicao;
    int linha, coluna;

    while (jogada < 9) {

        mostrar_tabuleiro(tabuleiro);

        printf("%s, escolha uma posicao (1 a 9): ",
               jogadores[jogadorAtual].nome);

        if (scanf("%d", &posicao) != 1) {
            printf("Entrada invalida!\n");

        }

        if (posicao < 1 || posicao > 9) {
            printf("Posicao invalida! Tente novamente.\n");
            continue;
        }

        linha = (posicao - 1) / 3;
        coluna = (posicao - 1) % 3;

        if (tabuleiro[linha][coluna] == 'X' ||
            tabuleiro[linha][coluna] == 'O') {

            printf("Essa posicao ja esta ocupada!\n");
            continue;
        }

        if (jogadorAtual == 0) {
            tabuleiro[linha][coluna] = 'X';
        } else {
            tabuleiro[linha][coluna] = 'O';
        }

        jogadores[jogadorAtual].numeroJogadas++;

        jogada++;

        if (verificavitoria(tabuleiro)) {

            mostrar_tabuleiro(tabuleiro);

            printf("JOGADOR: %s GANHOUU!!\n",
                   jogadores[jogadorAtual].nome);

            return jogada;
        }

        jogadorAtual = 1 - jogadorAtual;
    }

    mostrar_tabuleiro(tabuleiro);

    printf("O JOGO TERMINOU EM EMPATE!\n");

    return jogada;
}