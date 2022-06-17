#include "Dog.h"
#include <string>
#include <iostream>
Dog::Dog(std::string species_val, int age_val, std::string name_val)
    : Animal {species_val, age_val}, name {name_val} {
    std::cout << "Dog constructor is called" << std::endl;
}

Dog::~Dog()
{
        std::cout << "Dog destructor is called" << std::endl;
}

//void Dog::make_sound(){
//    std::cout << "wo wo" << std::endl;
//}
