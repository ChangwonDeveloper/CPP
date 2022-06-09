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
};

#endif // _HUMAN_H_
