#include <iostream>
#include <string>

int main(){

    int number = 10;
    int result = 20;

    number+=2;

    //std::cout << number << '\n';

    double pi = (int)3.141592653;

    //std::cout << pi << '\n';

    int questions = 12;
    int correct = 10;

    double score = (double)correct / questions;//double used because without conversion the decimal will be truncated

    std::cout << score << '\n';

    return 0;
}