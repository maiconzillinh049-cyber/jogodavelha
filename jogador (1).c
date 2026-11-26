#include <stdio.h>
#include "jogador.h"

void cadastrar_jogadores(struct Jogador jogadores[]) {

    for (int i = 0; i < 2; i++) {
        printf("Digite o nome do jogador %d: ", i + 1);

        scanf(" %49[^\n]", jogadores[i].nome);

        jogadores[i].numeroJogadas = 0;
    }
}

void mostrar_jogadores(struct Jogador jogadores[]) {

    printf("\n--- Jogadores cadastrados ---\n");

    for (int i = 0; i < 2; i++) {
        printf("%s\n", jogadores[i].nome);
    }
}