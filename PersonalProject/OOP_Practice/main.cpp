#include <iostream>
#include "Human.h"
using namespace std;



int main(){
    
    Human changwon;
    
    changwon.age = 15;
    changwon.first_name = "Changwon";
    changwon.last_name = "Chun";\
//    changwon.wealth = 600; error because wealth attribute is private.
    
    cout << changwon.age << endl;
    cout << changwon.first_name << endl;
    cout << changwon.last_name << endl;
    changwon.sayhi();
    changwon.sayname("Chris");
    changwon.set_wealth(50000);
    changwon.show_wealth();
    return 0;
    
}