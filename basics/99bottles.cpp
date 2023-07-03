/*
Incrementing for loop:

for (int i = 0; i < 20; i++) 
{
    Statements
}
Decrementing for loop:

for (int i = 20; i > 0; i--) 
{
    Statements
}
*/


#include <iostream>

int main()
{

    // Write a for loop here:
    for (int i = 99; i > 0; i--)
    {
        std::cout << "\n"
                << i << " bottles of pop on the wall. \nTake one down and pass it around.\n"
                << i - 1 << " bottles of pop on the wall.\n";
    }
}