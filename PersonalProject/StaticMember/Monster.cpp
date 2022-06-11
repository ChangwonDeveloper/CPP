#include "Monster.h"
#include <iostream>

// need to intiialize to use it
int Monster::monster_num {0};

Monster::get_monster_num(){
    return monster_num;
}

Monster::Monster(std::string name_val, int attack_val)
    : name {name_val}, attack {attack_val} {
        ++monster_num;
}

Monster::~Monster()
{
    --monster_num;
    std::cout << "destructor is called" << std::endl;
}

Monster::Monster(const Monster &source)
    : Monster {source.name, source.attack} {
        std::cout << "Copy constructor is called" << std::endl;
    
}
