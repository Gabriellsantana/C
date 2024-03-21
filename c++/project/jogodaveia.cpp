#include <stdio.h>

#define SIZE 3

void initialize_board(char board[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

void print_board(char board[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("---|---|---\n");
        }
    }
}

int check_winner(char board[SIZE][SIZE], char player) {
    int i, j;
    // Verifica linhas e colunas
    for (i = 0; i < SIZE; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1; // Vencedor encontrado
        }
    }
    // Verifica diagonais
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1; // Vencedor encontrado
    }
    return 0; // Ainda não há vencedor
}

int main() {
    char board[SIZE][SIZE];
    int row, col;
    char current_player = 'X';
    int moves = 0;

    initialize_board(board);

    printf("Bem-vindo ao Jogo da Velha!\n");

    while (1) {
        printf("\nTabuleiro atual:\n");
        print_board(board);

        printf("\nVez do jogador %c. Digite a linha e a coluna (0-2): ", current_player);
        scanf("%d %d", &row, &col);

        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) {
            printf("Jogada inválida. Por favor, tente novamente.\n");
            continue;
        }

        if (board[row][col] != ' ') {
            printf("Essa célula já está ocupada. Por favor, tente novamente.\n");
            continue;
        }

        board[row][col] = current_player;
        moves++;

        if (check_winner(board, current_player)) {
            printf("\nO jogador %c venceu!\n", current_player);
            break;
        } else if (moves == SIZE * SIZE) {
            printf("\nO jogo terminou em empate!\n");
            break;
        }

        // Troca o jogador
        current_player = (current_player == 'X') ? 'O' : 'X';
    }

    printf("\nTabuleiro final:\n");
    print_board(board);

    return 0;
}

