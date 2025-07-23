#include<iostream>
int main(){
    for(int i = 0; i < 10; i++) {
        if (i == 5) {
            std::cout << "Skipping number 5" << '\n';
            continue; 
        }
        std::cout << "Current number: " << i << '\n';
    }
}