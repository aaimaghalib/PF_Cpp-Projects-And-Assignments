#include <iostream>
int main() 
{
    std::cout << "Number\tSquare\tCube" << std::endl;
    for (int number = 0; number <= 10; ++number) 
{
        int square = number * number;
        int cube = number * number * number;
        std::cout << number << "\t" << square << "\t" << cube << std::endl;
    }
    return 0;
}






