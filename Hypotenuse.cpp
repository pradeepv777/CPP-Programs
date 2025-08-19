#include<iostream>
#include<cmath>
int main(){

    int x;
    int y;
    std::cout << "Enter the value of X: "<<'\n';
    std::cin>>x, '\n';
    std::cout << "Enter the value of y: "<<'\n';
    std::cin>>y, '\n';
    double hypotenuse = sqrt(pow(x,2) + pow(y,2));
    std:: cout << " kength of hypotnuse is :"<< hypotenuse<<'\n';

}