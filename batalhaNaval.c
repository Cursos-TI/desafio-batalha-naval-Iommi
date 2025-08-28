#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;

    // inicializando tabuleiro com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // com desafio aventureiro adicionando 4 navios (3 partes cada um)
    int navio1[3] = {3, 3, 3}; // horizontal
    int navio2[3] = {3, 3, 3}; // vertical
    int navio3[3] = {3, 3, 3}; //diagonal direita
    int navio4[3] = {3, 3, 3}; //diagonal esquerda

    // posições iniciais
    int linhaNavio = 2, colunaNavio = 4; // horizontal
    int linhaNavio2 = 6, colunaNavio2 = 1; // vertical
    int linhaNavio3 = 0, colunaNavio3 = 0; //diagonal direita
    int linhaNavio4 = 5, colunaNavio4 = 4;

    // posicionando navio horizontal
    for (i = 0; i < 3; i++) {
        tabuleiro[linhaNavio][colunaNavio + i] = navio1[i];
    }

    // Posicionar navio vertical
    for (i = 0; i < 3; i++) {
        tabuleiro[linhaNavio2 + i][colunaNavio2] = navio2[i];
    }
    
    //posicionando navio diagonal direita
    for(i = 0; i < 3; i++) {
        tabuleiro[linhaNavio3 + i][linhaNavio3 + i] = navio3[i];
    }

    //posicionando navio na diagonal esquerda
    for(i = 0; i < 3; i++) {
        tabuleiro[linhaNavio4 + i][colunaNavio4 - i] = navio4[i];
    }

    // exibir tabuleiro
    printf("------ TABULEIRO NAVAL -------\n\n");

    // letras das colunas
    printf("   ");
    for (j = 0; j < 10; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // números das linhas
    for (i = 0; i < 10; i++) {
        printf("%2d ", i);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}