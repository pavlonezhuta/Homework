#include <iostream>
 
int main ()
{
    std::cout << "Enter number of elements: ";
    unsigned numberOfElements; // N
    std::cin >> numberOfElements;
 
    std::cout << "Enter an integer: ";
    int current = 0;
    std::cin >> current;
 
    int maxElem = current;
    --numberOfElements;
 
    for (unsigned i = 0; i < numberOfElements; ++i)
    {
        std::cout << "Enter an integer: ";
        std::cin >> current;
 
               {
            maxElem += current;
        }
    }
    std::cout << "Suma: " << maxElem;
}
