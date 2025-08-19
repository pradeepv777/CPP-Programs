#include <iostream>
#include <ctime>
#include <cstdlib>
void drawBoard(char *spaces);
char checkWin(char *spaces);
bool checkTie(char *spaces);
void computerMove(char *spaces);

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    bool gameOver = false;

    while (!gameOver) {
        drawBoard(spaces);
        int move;
        std::cout << "Players " << player << ", enter your move (1-9): ";
        std::cin >> move;
        move--;

        if (move < 0 || move >= 9 || spaces[move] != ' ') {
            std::cout << "Invalid move. Try again.\n";
            continue;
        }

        spaces[move] = player;

        char winner = checkWin(spaces);
        if (winner != ' ') {
            drawBoard(spaces);
            std::cout << "Player " << winner << " wins!\n";
            gameOver = true;
            break;
        }

        if (checkTie(spaces)) {
            drawBoard(spaces);
            std::cout << "It's a tie!\n";
            gameOver = true;
            break;
        }

        player = (player == 'X') ? 'O' : 'X';

        if (player == 'O') {
            computerMove(spaces);

            winner = checkWin(spaces);
            if (winner != ' ') {
                drawBoard(spaces);
                std::cout << "Player " << winner << " wins!\n";
                gameOver = true;
                break;
            }

            if (checkTie(spaces)) {
                drawBoard(spaces);
                std::cout << "It's a tie!\n";
                gameOver = true;
                break;
            }

            player = 'X';
        }
    }

    return 0;
}

void drawBoard(char *spaces) {
    std::cout << "\n";
    std::cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << "\n";
    std::cout << "---|---|---\n";
    std::cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << "\n";
    std::cout << "---|---|---\n";
    std::cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << "\n\n";
}

char checkWin(char *spaces) {
    for (int i = 0; i < 3; i++) {
        if (spaces[i * 3] == spaces[i * 3 + 1] &&
            spaces[i * 3] == spaces[i * 3 + 2] &&
            spaces[i * 3] != ' ') return spaces[i * 3];

        if (spaces[i] == spaces[i + 3] &&
            spaces[i] == spaces[i + 6] &&
            spaces[i] != ' ') return spaces[i];
    }

    if (spaces[0] == spaces[4] && spaces[0] == spaces[8] && spaces[0] != ' ') return spaces[0];
    if (spaces[2] == spaces[4] && spaces[2] == spaces[6] && spaces[2] != ' ') return spaces[2];

    return ' ';
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ')
            return false;
    }
    return true;
}

void computerMove(char *spaces) {
    int move;
    do {
        move = rand() % 9;
    } while (spaces[move] != ' ');
    spaces[move] = 'O';
    std::cout << "Computer placed O at position " << (move + 1) << "\n";
}
