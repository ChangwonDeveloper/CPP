#include <iostream>
#include <string>

using namespace std;
class Monster{
private:
    string name;
    int attack;
    int defense;
    double health;
};

Monster::Monster()
    : Monster name {"None"}, attack {0}, defense {0}, health {0} {
    cout << "No-args constructors" endl;
}

int main(){
    
    Monster monster1;
    
    return 0;
    
}