#include<iostream>
int main(){
    enum class Color { Red, Green, Blue };
    Color myColor = Color::Green;

    switch (myColor) {
        case Color::Red:
            std::cout << "The color is Red." << '\n';
            break;
        case Color::Green:
            std::cout << "The color is Green." << '\n';
            break;
        case Color::Blue:
            std::cout << "The color is Blue." << '\n';
            break;
        default:
            std::cout << "Unknown color." << '\n';
    }

    return 0;
}