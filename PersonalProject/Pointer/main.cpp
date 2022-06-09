#include <iostream>
using namespace std;

void duplicate(int &b)
{
    b*=2;
}

int main()
{
    int x = 25;
    int *xptr = &x;
    cout << "The original value of x is " << x << endl;
    duplicate(x);
    cout << "The new value of x is " << x << endl;
//    duplicate(xptr);
//    cout << "The new value of x is " << x << endl;
    return 0;
}