#include <iostream>
using namespace std;

int getSum(const int a, const int b);

int getSum2(int a, int b);
int main(){
    
    int a = 5;
    int b = 10;
    const int c = 5;
    const int d = 10;
    
    
    cout << getSum(5, 10) << endl; // 5, 10 are constant
    cout << getSum(a, b) << endl; //
    cout << getSum(c, d) << endl; //
    cout << getSum2(a, b) << endl; //
    cout << getSum2(c, d) << endl;  // even though c, d are const in main, they are not in getSum2... so, it is a scope problem
    
    
    return 0;
}

int getSum(const int a, const int b){
    int sum = 0;
    
    sum = a + b;
    return sum;
}

// 
int getSum2(int a, int b){
    int sum = 0;
    a = b;
    sum = a + b;
    return sum;
}