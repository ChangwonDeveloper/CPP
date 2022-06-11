#ifndef _MONSTER_H_
#define _MONSTER_H_

#include <string>
class Monster
{
private:
    static int monster_num;
    std::string name;
    int attack;
public:
    std::string get_name(){ return name;}
    int get_attack(){return attack;}
    // need to be static
    static int get_monster_num();
    Monster(std::string name_val = "None", int attack_val = 0);
    Monster(const Monster &&source);
    ~Monster();

};



#endif // _MONSTER_H_
