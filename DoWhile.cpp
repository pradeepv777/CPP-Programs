#include<iostream>
int main(){
    int i = 0;
    do {
        std::cout << "Enter a number (0 to stop): ";
        std::cin >> i;
        if (i != 0) {
            std::cout << "You entered: " << i << '\n';
        }
    } while (i != 0);
    
    std::cout << "You exited the loop." << '\n';
    return 0;
}