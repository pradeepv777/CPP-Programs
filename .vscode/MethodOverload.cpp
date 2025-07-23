#include <iostream>

// Function declarations (prototypes)
void sum(int a, int b);
void sum(int a, int b, int c);

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    sum(a, b); 
    sum(a, b, 5); 

    return 0;
}


void sum(int a, int b) {
    int q = a + b;
    std::cout << "The sum is: " << q << std::endl;
}

void sum(int a, int b, int c) {
    int q = a + b + c;
    std::cout << "The sum is: " << q << std::endl;
}
