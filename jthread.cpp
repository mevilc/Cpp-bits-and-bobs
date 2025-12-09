#include <thread>
#include <iostream>

int main()
{
    // default thread
    std::thread t([](){ std::cout << "calling from thread\n"; });
    t.join(); // if thread did not join, then std::terminate would be called

    // jthread -- dont need explicit call to join().  Called in the destructor
    std::jthread j([](){ std::cout << "calling from jthread\n"; });
    return 0;
    
}