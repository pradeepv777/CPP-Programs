#include<iostream>
int main(){
    int rows, cols;
    char symbol;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> cols;
    std::cout << "enter sybol to print: ";
    std::cin >> symbol;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << symbol << " ";
        }
        std::cout << '\n'; 
     
    }

    return 0;
}