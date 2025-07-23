#include<iostream>
int main(){
    std::string car[][3]= {
        {"porsche", "ferrari", "lamborghini"},
        {"bugatti", "tesla", "ford"},
        {"toyota", "honda", "bmw"}
    };
    int rows = sizeof(car) / sizeof(car[0]);
    int cols = sizeof(car[0])/sizeof(car[0][0]);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << car[i][j] << " ";
        }
        std::cout << '\n';
    }

}