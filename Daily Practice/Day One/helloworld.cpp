#include <iostream>
#include <string>

namespace constants{
    double pi = 3.141592653;
    char A = 'A';
}

using typing_t = std::string;

int main(){

    typing_t text = "Hello World";
    std::cout << "Dummy Text" << text << '\n';

    return 0;
}
