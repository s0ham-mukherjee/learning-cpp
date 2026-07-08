#include <iostream>


/*
&& = and
|| = or
! = negation
*/

int main() {

    int temp;

    bool isRaining = false;

    std::cout << "Enter the current temperature : ";
    std::cin >> temp;


    if (temp>0 && temp<30){
        std::cout << "The weather is good today" << '\n';
    }

    else if (temp>=30 || temp<=0){
        std::cout << "The weather is bad today" << std::endl;
    }

    else{
        std::cout << "where are you gang" << std::endl;
    }


    if (!isRaining){
        std::cout << "You can't go outside" << std::endl;
    }

    else{
        std::cout << "You can go outside" << std::endl;
    }
}