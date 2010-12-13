#include <iostream>

void even (int i);

int main( ) {
    int i;
    for ( i=0; i < 10; i++)
    {
        if ( 0 == (i % 2)) 
        {
            even(i);
        }
    }
    std::cout << "Hello, ";
    std::cout << "World!";
    std::cout << "\n";
}

void 
even (int i)
{
    std::cout << "i ";
    std::cout << i;
    std::cout << " is ";
    std::cout << "even";
    std::cout << "\n";
}

