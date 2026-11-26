#include <stdio.h>
#include "arquivo.h"

void salvar_dados(struct Jogador jogadores[], int jogada) {

    FILE *arquivo;

    arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "===== DADOS DO JOGO DA VELHA =====\n");

    fprintf(arquivo, "Rodadas jogadas: %d\n", jogada);

    fprintf(arquivo, "\n--- Jogadores ---\n");

    for (int i = 0; i < 2; i++) {

        fprintf(arquivo, "Nome do jogador: %s\n",
                jogadores[i].nome);

        fprintf(arquivo, "Quantidade de jogadas: %d\n",
                jogadores[i].numeroJogadas);

        fprintf(arquivo, "----------------------------\n");
    }

    fclose(arquivo);

    printf("\nDados salvos no arquivo dados.txt!\n");
}