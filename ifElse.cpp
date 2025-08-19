#include<iostream>
int main(){
    int x;
    int y;
    std::cout << "Enter the value of X: "<<'\n';
    std::cin>>x;
    std::cout << "Enter the value of Y: "<<'\n';
    std::cin>>y;

    if (x > y) {
        std::cout << "X is greater than Y" << '\n';
    } else if (x < y) {
        std::cout << "Y is greater than X" << '\n';
    } else {
        std::cout << "X is equal to Y" << '\n';
    }
    
    return 0;
}