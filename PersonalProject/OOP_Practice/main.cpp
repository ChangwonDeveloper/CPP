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
    Human Chris;
    Human Jason(100000);
    Human Sam(1200, "Sam");
    cout << "===========================" << endl;
    // garbage value.
    Sam.show_wealth();
    cout << Sam.first_name << endl;
    
    
    return 0;
    
}