#include<iostream>
int main()
{
    std ::string car[] = {"porsche", "ferrari", "lamborghini", "bugatti", "tesla"};
    int size = sizeof(car)/sizeof(std::string);
    for (int i =0 ; i < size ;i++)
    {
        std::cout << car[i]<<'\n'<<'\n';
        
    }
    std::cout<<"Size of array is "<< size <<'\n';
}