#ifndef JOGADOR_H
#define JOGADOR_H

struct Jogador {
    char nome[50];
    int numeroJogadas;
};

void cadastrar_jogadores(struct Jogador jogadores[]);
void mostrar_jogadores(struct Jogador jogadores[]);

#endif