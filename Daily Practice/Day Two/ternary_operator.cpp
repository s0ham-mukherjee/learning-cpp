#include <iostream>
#include <algorithm>

int main() {

    float a ;
    bool hungry = true;

    int c=12,b=16;

    std::cout << "Enter your percentage:";
    std::cin >> a;

    /*if( a>75) {
        std::cout << "You have passed" ;

    }

    else {
        std::cout << "You have failed" ;
    }
    */

    a >= 75 ? std::cout << "You have passed " : std::cout << "You have failed " << std::endl;

    hungry ? std::cout << "You are hungry" : std::cout << "You are not hungry" << std::endl; ;

    c == std::max(c,b) ? std::cout << "c is greater than b" : std::cout << "b is greater than c" ;

    return 0;
}