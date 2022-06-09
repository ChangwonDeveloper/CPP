#include "Human.h"


void Human::set_wealth(int money){
    wealth = money;
}

int Human::get_wealth(){
    return wealth;
}

void Human::show_wealth(){
    
    std::cout << wealth << std::endl;
}