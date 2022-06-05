#include <iostream>

int main(){
    int cents {0};
    
    std::cout << "Enter an  amount in cents : ";
    std::cin >> cents;
    std::cout << "You can provide change for this change as follows : " << std::endl; 
    std::cout << "dollars : " << cents / 100 << std::endl; 
    std::cout << "quarters : " << cents / 25 << std::endl; 
    std::cout << "dimes : " << cents / 10 << std::endl; 
    std::cout << "nickels : " << cents / 5 << std::endl; 
    std::cout << "pennies : " << cents / 1 << std::endl; 
    
    return 0;
    
}