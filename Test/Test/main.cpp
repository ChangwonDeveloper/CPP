#include <iostream>

int main(){
    
    int total {};
    int num1{}, num2{}, num3{};
    const int count {3};
    
    std::cout << "Enter 3 integers by spaces: ";
    std::cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    // make sure that total is can be double
    average = static_cast<double>(total) / count;
    
    // old c-style cast
//    average = (double)total / count;
    
    std::cout << "The 3 numbers were " << num1 << ", " << num2 << ", " << num3 << std::endl;
    std::cout << "The sum of the number is: " << total << std::endl;
    std::cout << "The average of the number is " << average << std::endl;
    
    std::cout << std::endl;
    
    
    return 0;
    
}