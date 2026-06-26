#include <iostream>
int main() 
{
    int num1, num2, num3, num4;
    std::cout << "Enter four integers: ";
    std::cin >> num1 >> num2 >> num3 >> num4;
    int largest = num1;
    if (num2 > largest)
  {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    if (num4 > largest) {
        largest = num4;
    }
    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}

