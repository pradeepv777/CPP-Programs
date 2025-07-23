#include <iostream>

void userChoice();
char computerChoice();
void determineWinner(char user, char computer);

int main() {
    userChoice();
    return 0;
}

void userChoice() {
    char user;
    std::cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    std::cin >> user;
    user = std::toupper(user);
    char computer = computerChoice();
    determineWinner(user, computer);
}

char computerChoice() {
    char choice = 'R'; // Fixed choice: Rock
    std::cout << "Computer chose: " << choice << '\n';
    return choice;
}

void determineWinner(char user, char computer) {
    if (user == computer) {
        std::cout << "It's a tie!" << '\n';
    } else if ((user == 'R' && computer == 'S') ||
               (user == 'P' && computer == 'R') ||
               (user == 'S' && computer == 'P')) {
        std::cout << "You win!" << '\n';
    } else {
        std::cout << "Computer wins!" << '\n';
    }
}
