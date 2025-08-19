#include<iostream>
#include<cmath>
int main(){
    double a = 5.0;
    double b = 3.0;
    double sum = a + b;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Square root of sum: " << sqrt(sum) << std::endl;
    std::cout << "Power of a raised to b: " << pow(a, b) << std::endl;
    std::cout << "Cosine of a: " << cos(a) << std::endl;
    std::cout << "Sine of b: " << sin(b) << std::endl;
    std::cout << "Tangent of a: " << tan(a) << std::endl;
    std::cout << "Logarithm of a: " << log(a) << std::endl;
    std::cout << "Exponential of b: " << exp(b) << std::endl;
    std::cout << "Absolute value of -a: " << fabs(-a) << std::endl;
    std::cout << "Floor of a: " << floor(a) << std::endl;
    std::cout << "Ceiling of b: " << ceil(b) << std::endl;
    std::cout << "Rounding a: " << round(a) << std::endl;
    
}