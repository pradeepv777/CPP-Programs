#include<iostream>
int main(){
    struct Student {
        std::string name;
        int age;
        float gpa;
        bool enrolled; 
    };

    Student student1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.gpa = 3.5;
    student1.enrolled = true;

    std::cout << "Student Name: " << student1.name << '\n';
    std::cout << "Student Age: " << student1.age << '\n';
    std::cout << "Student GPA: " << student1.gpa << '\n';
    std::cout << "Enrolled: " <<student1.enrolled<< '\n';

    return 0;
}