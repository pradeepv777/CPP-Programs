#include<iostream>
int main(){
    const int SIZE = 10;
    
    std::string name[SIZE];
    fill(name,name +10,"Nick");
    for (std::string  i : name ) {
        std::cout << i << '\n';
    }
    

}