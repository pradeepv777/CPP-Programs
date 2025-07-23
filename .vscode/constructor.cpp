#include<iostream>
class Student {
public:
    std::string name;
    int age;
    float gpa;
    bool enrolled;

    Student(std::string name, int age, float gpa, bool e) {
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
        this -> enrolled = e;
    }
    void displayInfo() {
        std::cout << "Student Name: " << name << '\n';
        std::cout << "Student Age: " << age << '\n';
        std::cout << "Student GPA: " << gpa << '\n';
        std::cout << "Enrolled: " << (enrolled ? "Yes" : "No") << '\n';
    }
};
int main(){
     Student s1("Fume Knight", 69, 3.5, true);
    s1.displayInfo();
    return 0;
}
