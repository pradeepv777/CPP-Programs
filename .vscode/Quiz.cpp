#include<iostream>
int main(){
    std::string Questions[] = {
        "What is the capital of France?",
        "What is 2 + 2?",
        "What is the largest planet in our solar system?"
    };
    std::string options[][4] = {
        {"A) Paris", "B) London", "C) Berlin", "D) Madrid"},
        {"A) 3", "B) 4", "C) 5", "D) 6"},
        {"A) Earth", "B) Mars", "C) Jupiter", "D) Saturn"}
    };
    char answers[] = {'A', 'B', 'C'};
    int score = 0;
    int size = sizeof(Questions)/sizeof(Questions[0]);
    char guess;
    for (int i = 0; i < size; i++) {
        std::cout << Questions[i] << '\n';
        for (int j = 0; j < 4; j++) {
            std::cout << options[i][j] << '\n';
        }
        std::cout << "Enter your answer (A, B, C, D): ";
        std::cin >> guess;
        guess = toupper(guess);
        if (guess == answers[i]) {
            std::cout << "Correct!" << '\n';
            score++;
        } else {
            std::cout << "Wrong! The correct answer was " << answers[i] << '\n';
        }
        std::cout << score;
    }
}