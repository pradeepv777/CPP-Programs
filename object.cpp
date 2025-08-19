#include<iostream>
int main()
{
    class Student {
    public:
        std::string name;
        int age;
        float gpa;
        bool enrolled;
        void displayInfo() {
            std::cout << "Student Name: " << name << '\n';
            std::cout << "Student Age: " << age << '\n';
            std::cout << "Student GPA: " << gpa << '\n';
            std::cout << "Enrolled: " << (enrolled ? "Yes" : "No") << '\n';
        }
    };
    Student student1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.gpa = 3.5;
    student1.enrolled = true;
    student1.displayInfo();

    return 0;
}