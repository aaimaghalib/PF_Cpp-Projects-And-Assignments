#include <iostream>
bool isMultiple(int first, int second)
 {
    return (first % second) == 0;
}
int main() 
{
    int first, second;
    std::cout << "Enter the first integer: ";
    std::cin >> first;

    std::cout << "Enter the second integer: ";
    std::cin >> second;

    if (isMultiple(first, second))
 {
        std::cout << first << " is a multiple of " << second << std::endl;
    } else 
{
        std::cout << first << " is not a multiple of " << second << std::endl;
    }
    return 0;
}

