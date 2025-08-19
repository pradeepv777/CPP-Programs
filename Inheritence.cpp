#include<iostream>
class Animal {
public:
     bool isAlive = true;
    virtual void sound() {
        std::cout << "Animal makes a sound" << '\n';
    }
};
class Dog : public Animal{
    public:
     void sleep(){
        std::cout << "Dog is sleeping" << '\n';
     }
};
class Cat: public Dog{
    public:
     void sound() override {
        std::cout << "Cat meows" << '\n';
     }
};
int main(){
Dog dog;
Cat cat;
std::cout << (dog.isAlive ? "true":"False")  << '\n';
dog.sound();
dog.sleep();
cat.sleep();
cat.sound();


} 
