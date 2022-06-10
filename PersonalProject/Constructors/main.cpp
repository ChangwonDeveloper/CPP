#include <iostream>
#include <string>

using namespace std;
class Monster{
private:
    string name;
    int attack;
    int defense;
    double health;
public:
    string get_name(){return name;}
    int get_attack(){return attack;}
    int get_defense(){return defense;}
    double get_health(){return health;}
    // default parameter prdovide default value
    Monster(std::string name_val = "None", int attck_val = 0, int defense_val = 0, double health_val = 0);
    // copy constructor
    Monster(const Monster &source);
};

Monster::Monster(std::string name_val, int attack_val, int defense_val, double health_val)
    : name {name_val}, attack{attack_val}, defense{defense_val}, health{health_val} {
    cout << "4-args constructors is created named by " << name << endl;
}

// copy constructor must be one in class
Monster::Monster(const Monster &source)
//    : name {source.name}, attack {source.attack}, defense {source.defense}, health {source.health}{
        // delegating constructors call delegating constructor by providing the constructor name
    : Monster {source.name, source.attack, source.defense, source.health}{
    // delegating constructor only work in initialization list. you cannot call the other constructor form the body in the delegating constructors
        cout << "copy constructor is called " << source.name << endl;
    }
    

void display(Monster m){
    cout << m.get_name() << endl;
    cout << m.get_attack() << endl;
    cout << m.get_defense() << endl;
    cout << m.get_health() << endl;
    cout << "=========================" << endl;
}

int main(){
    
    Monster monster1;
    Monster monster2 {"Dragon"};
    Monster new_monster {monster1};
    Monster new_monster2s {monster2};
    
    display(monster1);
    display(monster2);
    
    return 0;
    
}