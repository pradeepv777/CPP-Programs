#include<iostream>
int main(){
    int a = 10;
    int b = 20;
    int *p1 = &a; 
    int *p2 = &b; 

    std::cout << "Value of a: " << a << '\n';
    std::cout << "Value of b: " << b << '\n';
    std::cout << "Pointer p1 points to value: " << *p1 << '\n';
    std::cout << "Pointer p2 points to value: " << *p2 << '\n';
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    std::cout << "After swapping:\n";
    std::cout << "Value of a: " << a << '\n';
    std::cout << "Value of b: " << b << '\n';

    return 0;
}