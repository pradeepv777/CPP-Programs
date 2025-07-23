#include<iostream>
#include<ctime>
int main(){
    srand(time(NULL));
    int randomNum = rand() % 5 + 1; 
    switch(randomNum){
        case 1:
            std::cout<<" you won a car!"<<'\n';
            break;
        case 2:
            std::cout<<" you won a bike!"<<'\n';
            break;

        case 3: 
            std::cout<<" you won a trip!"<<'\n';
            break;
        case 4:
            std::cout<<" you won a watch!"<<'\n';
            break;

        case 5:     
            std::cout<<" you won a gift card!"<<'\n';
            break;
        default:
            std::cout<<" No prize loser booooooooo!"<<'\n';
            break;
    }
    
    return 0;
}