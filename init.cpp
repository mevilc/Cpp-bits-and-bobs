#include <iostream>

int i;          // global variable -- static storage duration -- initializes to 0
static int k;   // static variable -- static storage duration -- initializes to 0

int main()
{
    // local variable.  Initializes to whatever.
    int j;

    static int q; 

    std::cout << i << "\n";
    std::cout << k << "\n";
    std::cout << j << "\n";
    std::cout << q << "\n";
}