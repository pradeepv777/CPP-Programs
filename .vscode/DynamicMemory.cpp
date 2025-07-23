#include <iostream>
int factorial(int num);

int main() {
    std::cout << "Enter a number to calculate its factorial: ";
    int num;
    std::cin >> num;
    std::cout << "Factorial of " << num << " is: " << factorial(num) << '\n';
    return 0;
}

int factorial(int num) {
    if (num > 1)
        return num * factorial(num - 1);
    else
        return 1;
}
