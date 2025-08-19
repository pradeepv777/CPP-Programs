#include<iostream>
int main(){
    int a, b, c;
    std::cout << "Enter three numbers: " << '\n';
    std::cin >> a >> b >> c;

    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    
    std::cout << "The maximum number is: " << max << '\n';
    
    return 0;
}