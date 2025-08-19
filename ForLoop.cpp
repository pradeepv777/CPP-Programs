#include<iostream>
int main(){
    int i =0 ;
    for (i= 0; i<= 10; i++){
        std::cout<<" Counter: "<<i<<'\n';
        if (i == 5) {
            std::cout << "Reached halfway point!" << '\n';
        }
    }std::cout << "Loop completed." << '\n';
    return 0;
}