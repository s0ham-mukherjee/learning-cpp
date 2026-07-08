#include <iostream>
#include <cmath>

int main(){

    std::string operand;
    
    std::cout << "Enter the operation you want to perform (add, subtract, multiply, divide, power): " << '\n';
    std::cin >> operand;

    double a,b;

    switch(operand[0]){

        default:
            std::cout << "Enter a valid operation." << '\n';
            break;
        
        case 'a':
            
            
            std::cout << "Enter two numbers to add: " ;
            std::cin >> a;
            std::cin >> b;

            std::cout << "The sum is " << a + b << '\n';
            break;
        
        case 's':

            
                
                std::cout << "Enter two numbers to subtract: " ;
                std::cin >> a;
                std::cin >> b;

                std::cout << "The result is " << a - b << '\n';
                break;
        
        case 'm':
        
           
                
                std::cout << "Enter two numbers to multiply: " ;
                std::cin >> a;
                std::cin >> b;

                std::cout << "The result is " << a * b << '\n';
                break;
        
        case 'd':
        
          
                
                std::cout << "Enter two numbers to divide: " ;
                std::cin >> a;
                std::cin >> b;

                if(b==0){
                    std::cout << "Division by zero is not allowed." << '\n';
                }
                else{
                    std::cout << "The result is " << a /(double) b << '\n';
                }
                break;

        case 'p':
                
           
                
                std::cout << "Enter the base and exponent: " ;
                std::cin >> a;
                std::cin >> b;

                std::cout << "The result is " << pow(a,b) << '\n';
                break;
        }

        return 0;
    }