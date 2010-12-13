#include <iostream>

void notExecuted ()
{
    std::cout << "this ";
    std::cout << "should ";
    std::cout << "never ";
    std::cout << "appear";
    std::cout << "\n";
}

int main( ) {
    std::cout << "Hello, ";
    std::cout << "World!";
    std::cout << "\n";
}

