#include <iostream>
using namespace std;

int main() 
{
  const double PI = 3.14159; // define PI constant
  double radius, circumference;

  cout << "Enter the radius of the circle: ";
  cin >> radius;

  circumference = 2 * PI * radius;

  cout << "The circumference of the circle is " << circumference << endl;
}
