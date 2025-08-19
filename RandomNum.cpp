#include<iostream>
#include<ctime>
int main(){

    srand(time(NULL));
    int num= rand();
    std::cout << "Random number generated: " << num << '\n';
    return 0 ;
}