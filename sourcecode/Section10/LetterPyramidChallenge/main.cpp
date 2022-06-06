#include <iostream>
#include <string>
/*
 * 
 * Write a C++ program that displays a Letter Pyramid from a user-provided std::string.
Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows
*/
using namespace std;
int main(){
    string input;
    
    cout << "Enter your string: ";
    getline(cin, input);
    cout << input.length();
    for(int i {0}; i < input.length(); i++){
        if(input.length() % 2 == 1){
            for(int j {0}; i < input.length()/2; j++){
                
            }
        }
    }
    
    return 0;
    
}