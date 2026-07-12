#include <iostream>

void showBalance(double balance);
double withdraw(double balance);
double deposit(double balance);

int main(){

    double balance;
    int choice;

    std::cout << "Enter Balance: ";
    std::cin >> balance;

    do {

        std::cout << "Enter your choice:\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. See Balance\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;

        switch(choice){

            default:
                std::cout << "Invalid Choice\n";
                break;

            case 1:
                balance = deposit(balance);
                break;

            case 2:
                balance = withdraw(balance);
                break;

            case 3:
                showBalance(balance);
                break;

            case 4:
                break;
        }

    } while(choice != 4);

}


void showBalance(double balance){
    std::cout << "Balance: " << balance << '\n';
}


double withdraw(double balance){

    double amount;

    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    return balance - amount;
}


double deposit(double balance){

    double amount;

    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    return balance + amount;
}