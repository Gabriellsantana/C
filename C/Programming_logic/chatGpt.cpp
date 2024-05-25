#include <iostream>
#include <vector>

using namespace std;

// Função para imprimir o tabuleiro
void printBoard(const vector<vector<char>>& board) {
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        };
        cout << endl;
    };
};

// Função para verificar se alguém ganhou
char checkWinner(const vector<vector<char>>& board) {
    // Verifica linhas
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return board[i][0];
        };
    };
    // Verifica colunas
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return board[0][i];
        };
    }
    // Verifica diagonais
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return board[0][2];
    };
    // Se não houver vencedor
    return ' ';
};

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Inicializa o tabuleiro vazio
    char currentPlayer = 'X'; // Começa com o jogador X
    int row, col;

    cout << "Bem-vindo ao Jogo da Velha!\n";

    while (true) {
        printBoard(board);
        cout << "Jogador " << currentPlayer << ", digite a linha e a coluna (1-3): ";
        cin >> row >> col;

        // Verifica se a posição está válida
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            cout << "Posicao invalida! Tente novamente.\n";
            continue;
        };

        // Atualiza o tabuleiro
        board[row - 1][col - 1] = currentPlayer;

        // Verifica se alguém ganhou
        char winner = checkWinner(board);
        if (winner != ' ') {
            printBoard(board);
            cout << "Parabens! O jogador " << winner << " ganhou!\n";
            break;
        };

        // Verifica se houve empate
        bool isFull = true;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ') {
                    isFull = false;
                    break;
                }
            }
        }
        if (isFull) {
            printBoard(board);
            cout << "Empate! O jogo acabou.\n";
            break;
        };

        // Troca o jogador
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    };

    return 0;
};

