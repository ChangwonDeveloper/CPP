#include "Teacher.h"
#include <string>
#include <iostream>
// constructor
Teacher::Teacher(std::string name_val, int age_val)
    : name {name_val}{
        age = new int;
        *age = age_val;
    std::cout << "Constructor is called" << std::endl;
}

// copy constcutror
Teacher::Teacher(const Teacher &source)
    : Teacher {source.name, *source.age}{
    std::cout << "Copy constuctor is called" << std::endl;
}

Teacher::Teacher(Teacher &&source)
    : name {source.name}, age {source.age} {
        source.name = nullptr;
        source.age = nullptr;
        std::cout << "Move constructor is called" << std::endl;
}

// destructor
Teacher::~Teacher()
{
    std::cout << "Destructor is called" << std::endl;
}

