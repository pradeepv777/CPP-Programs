#include<iostream>
int main(){
    int a, b, c;
    std::cout << "Enter three numbers: " << '\n';
    std::cin >> a >> b >> c;

    if (a > b && a > c) {
        std::cout << "A is the largest number: " << a << '\n';
    } else if (b > a && b > c) {
        std::cout << "B is the largest number: " << b << '\n';
    } else if (c > a && c > b) {
        std::cout << "C is the largest number: " << c << '\n';
    } else {
        std::cout << "There is no single largest number." << '\n';
    }

    return 0;
}