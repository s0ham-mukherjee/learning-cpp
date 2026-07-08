#include <iostream>

int main(){

    int age;
    
    std::cout << "Enter your age:" ;
    std::cin >> age;

    if(age>=18) {
        std::cout << "You are eligible to vote." << std::endl;
    }

    else if (age < 0) {
        std::cout << "You haven't been born yet." << '\n';
    }

    else {
        std::cout << "You are not eligible to vote." << '\n';
    }
    
    return 0;
}