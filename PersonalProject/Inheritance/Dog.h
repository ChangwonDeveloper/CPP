#ifndef _DOG_H_
#define _DOG_H_
#include "Animal.h"
#include <string>
class Dog: public Animal
{
    std::string name;
public:
    Dog(std::string species = "None", int age = 0, std::string name = "None");
    ~Dog();
//    void make_sound();

};

#endif // _DOG_H_
