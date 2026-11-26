#include <stdio.h>

#include "jogador.h"
#include "jogo.h"
#include "arquivo.h"

int main() {

    printf("----- VAMO JOGAR!! -----\n");

    struct Jogador jogadores[2];

    cadastrar_jogadores(jogadores);

    mostrar_jogadores(jogadores);

    int jogada = iniciar_jogo(jogadores);

    printf("\n--- Resultado das jogadas ---\n");

    for (int i = 0; i < 2; i++) {

        printf("Jogador: %s\n", jogadores[i].nome);

        printf("Numero de jogadas: %d\n",
               jogadores[i].numeroJogadas);

        printf("----------------------------\n");
    }

    salvar_dados(jogadores, jogada);

    return 0;
}