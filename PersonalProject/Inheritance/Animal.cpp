#include "Animal.h"
#include <string>
#include <iostream>
Animal::Animal(std::string speices_val, int age_val)
    : species {speices_val}, age {age_val}{
    std::cout << "Constructor is called" << std::endl;
    
}

Animal::~Animal()
{
    std::cout << "Destructor is called" << std::endl;
}

void Animal::make_sound(){
    std::cout << "Animal make sound" << std::endl;
}
