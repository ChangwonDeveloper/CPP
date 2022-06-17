#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <string>
class Animal
{
private:
    std::string species;
    int age;
    
    
public:
    Animal(std::string = "None", int age = 0 );
    void make_sound();
    ~Animal();

};

#endif // _ANIMAL_H_
