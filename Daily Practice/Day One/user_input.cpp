#include <iostream>
#include <string>

int main(){
    std::string name;
    int age;
    
    std::cout << "Enter your name:" ;
    std::getline(std::cin,name) ;
   

    std::cout << "Enter your age:" ;
    std::cin >> age;
    
    std::cin.ignore(); // Ignore the newline character left in the buffer

    std::cout << "Hello," << name << "!" << std::endl ;
    std::cout << "You are " << age << " years old." << '\n' ;

    return 0;
}