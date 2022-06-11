#include <iostream>
#include <Monster.h>

void display(){
    std::cout << "Active monsters: " << Monster::get_monster_num() << std::endl;
    std::cout << "=====================" << std::endl;
}

void display_info(Monster m){
    std::cout << "The monster name is: " << m.get_name() << std::endl;
    std::cout << "The monster attack is: " << m.get_attack() << std::endl;
    std::cout << "Active monsters: " << Monster::get_monster_num() << std::endl;
}
// copy constructor and move constructor. would it increase num?
int main(){
    display();
    
    Monster dragon{"dragon"};
    display();
    
    display_info(dragon);
    display();
    
    return 0;
    
}