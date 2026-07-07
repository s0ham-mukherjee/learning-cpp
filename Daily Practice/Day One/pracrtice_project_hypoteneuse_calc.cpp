#include <iostream>
#include <cmath>

int main(){

    double a;
    std::cout << "Enter side length a: ";
    std::cin >> a;

    double b;
    std::cout << "Enter side length b:";
    std::cin >> b;

    double c;
    c = sqrt ( pow(a,2) + pow (b,2) ) ;
    std::cout << "The length of the hypotenuse is: " << c << '\n';
    
    return 0;
}