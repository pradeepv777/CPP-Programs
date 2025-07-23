#include<iostream>
int main(){
    std::string name;
    std::cout << "Enter a string: ";
    std::getline(std::cin,name);
    if (name.length() > 10) {
        std::cout << "The string is longer than 10 characters.";
    } else {
        std::cout << "The string is 10 characters or shorter." << std::endl;
    }

}