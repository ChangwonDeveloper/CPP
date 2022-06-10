#ifndef _HUMAN_H_
#define _HUMAN_H_
#include <string>
#include <iostream>
class Human{
  // attribute
private:
    int wealth;
    
public:
    int age;
    std::string first_name;
    std::string last_name;
    
    void sayhi(){ std::cout << "Hi" << std::endl;}
    void sayname(std::string name){ std::cout << "Hi " << name << std::endl;}
    
    void set_wealth(int moneys);
    int get_wealth();
    void show_wealth();
    // if there is no matching constrtuctor, compiler error
    Human(){
        std::cout << first_name << " is created" << std::endl;
    }
    Human(int wealth){
        std::cout << first_name << " is created with " << wealth << std::endl;
    }
    // constructos parameter name and class attributes name can be different
    // and the order of parameter must be the same.
    Human(int wealth, std::string f){
        std::cout << first_name << " is created with " << wealth << " " << f << std::endl;
    }
};

#endif // _HUMAN_H_
