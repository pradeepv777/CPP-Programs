#include<iostream>
int main(){
    std::string name;
    std::cout << "Enter a string: ";
    std::cin>> name;
    while ( name.empty() ) {
        std::cout << "Enter a string";
        std::cin >> name;
    }
    std::cout << "You entered: " << name << '\n';
    return 0;
}