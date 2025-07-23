#include<iostream>
    namespace MyNamespace {
        void greet() {
            std::cout << "Hello from MyNamespace!" << std::endl;
} 
}
    int main(){
    using namespace MyNamespace;
      greet();
       return 0;
}

