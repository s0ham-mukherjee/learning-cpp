#include <iostream>

int main(){

    char grade;
    
    std::cout << "Enter your grade:" ;
    std::cin >> grade;

    switch(grade) {
        default:
            std::cout << "Invalid grade." << '\n';
            break;
        
        case 'A':
            std::cout << "Excellent" << '\n' ;
            break;

        case 'B':
            std::cout << "Good " << '\n';
            break;
            
        case 'C':
            std::cout << "Not Bad" << '\n';
            break;
        
        case 'D':
            std::cout << "Okay Okay" << '\n';
            break;
        
        case 'F':
            std::cout <<"Give up and explore other avenues" << '\n';
            break;
    }
}