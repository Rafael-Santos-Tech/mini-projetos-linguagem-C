#include <stdio.h>
#include <stdlib.h>

int main(){
    char tabuleiro[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    }, simbolo;

    int escolha, linha, coluna, jogador = 1, jogadas = 0, venceu = 0;

    while(jogadas < 9 && !venceu){
        simbolo = (jogador == 1) ? 'X' : 'O';

        printf("\n--- Jogo da Velha ---\n\n");

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf(" %c ", tabuleiro[i][j]);
                if (j < 2){
                    printf("|");
                }
            }
            printf("\n");
            if(i < 2){
                printf("---|---|---\n");
            }
        }

        printf("\n");

        int jogadaValida = 0;

        while(!jogadaValida){
            printf("Jogador %d (%c), Digite o número de casa desejada (1-9): ", jogador, simbolo);
            if (scanf("%d", &escolha) != 1) {
                while (getchar() != '\n');
                continue;
            }

            if(escolha < 1 || escolha > 9){
                printf(">> Entrada inválida! Por favor, escolha um número de 1 a 9.\n\n");
                continue;
            }

            linha = (escolha - 1) / 3;
            coluna = (escolha - 1) % 3;

            if(tabuleiro[linha][coluna] == 'X' || tabuleiro[linha][coluna] == 'O'){
                printf(">> Casa já ocupada! Escolha outra posição no tabuleiro.\n\n");
            } else {
                jogadaValida = 1;
            }
        }

        tabuleiro[linha][coluna] = simbolo;

        jogador = (jogador == 1) ? 2 : 1;
        jogadas++;

        for(int i = 0; i < 3; i++){
            if(tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]){
                venceu = 1;
            }
        }

        for(int j = 0; j < 3; j++){
            if(tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j]){
                venceu = 1;
            }
        }

        if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]){
            venceu = 1;
        }

        if(tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]){
            venceu = 1;
        }
    }

    printf("\n--- FIM DE JOGO ---\n\n");
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf(" %c ", tabuleiro[i][j]);
                if (j < 2){
                    printf("|");
                }
            }
            printf("\n");
            if(i < 2){
                printf("---|---|---\n");
            }
        }

        printf("\n");

        if(venceu){
            printf("Parabéns! O jogador %d (%c) VENCEU o  jogo!\n\n", jogador, simbolo);
        } else {
            printf("DEU VELHA! Ninguém venceu, o jogo terminou em empate.\n\n");
        }
    
    return 0;
}