#include <iostream>

// until this function is instantiated, the compiler does not create this function!
template <typename T>
void unInstantiatedFunc(T input)
{
    int x = input; // thats why this garbage works
}

template <typename T>
void print(T input) { std::cout << input << "\n"; }

int main()
{
    print<int>(10);
    print<char>('a');
    print<double>(12.22);
    
}