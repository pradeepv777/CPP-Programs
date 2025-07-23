#include<iostream>
int main(){

    int stud =100;
    stud ++;
    std::cout << "Number of students: " << stud << std::endl; 
    stud += 5; // Adding 5 to the current value
    std::cout << "Updated number of students: " << stud << std::endl;
    stud -= 6;
    std::cout << "After removing 6 students, total: " << stud << std::endl;
}