#include<iostream>

class Pizza{
    public:
    std::string topping1;
    std::string topping2;

    Pizza(){
       
    };
    Pizza(std:: string topping1){
        this->topping1 = topping1;
        std::cout<< "Topping 1: " << topping1 << '\n';
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        std::cout << "Topping 2: " << topping2 << '\n';
    }
};
int main(){
    Pizza pizza1("margerita");
    Pizza pizza2("capsicum", "onion");
    Pizza pizza3;

}
