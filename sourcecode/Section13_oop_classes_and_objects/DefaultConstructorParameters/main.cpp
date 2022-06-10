// Section 13
// Default Constructor Parameters
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    // default constructor / default parameters
    // the default parameters will automatically be supplied by the compiler when we need them
    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);
  //  Player() {}    // Will cause a compiler error
};

  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
            cout << "Three-args constructor" << endl;
}


int main() {
    
    Player empty;
    // None will be overriden by Frank ignore None
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
    
    return 0;
}

