#include<iostream>
int main()
{
    std ::string cars[] = {"porsche", "ferrari", "lamborghini", "bugatti", "tesla"};

    for (std:: string i : cars)
    {
        std::cout << i << '\n';
    }
}