#include <iostream>

int main() {
    int month;
    std::cout << "Enter the month number (1-12): " << '\n';
    std::cin >> month;

    switch (month) { 
        case 1:
            std::cout << "January" << '\n';
            break;
        case 2:
            std::cout << "February" << '\n';
            break;
        case 3:
            std::cout << "March" << '\n';
            break;
        case 4:
            std::cout << "April" << '\n';
            break;
        case 5:
            std::cout << "May" << '\n';
            break;
        case 6:
            std::cout << "June" << '\n';
            break;
        case 7:
            std::cout << "July" << '\n';
            break;
        case 8:
            std::cout << "August" << '\n';
            break;
        case 9:
            std::cout << "September" << '\n';
            break;
        case 10:
            std::cout << "October" << '\n';
            break;
        case 11:
            std::cout << "November" << '\n';
            break;
        case 12:
            std::cout << "December" << '\n';
            break;
        default:
            std::cout << "Invalid month number. Please enter a number between 1 and 12." << '\n';
            break;
    }

    return 0;
}