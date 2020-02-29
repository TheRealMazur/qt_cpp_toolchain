#include <iostream>
#include <string>
#include "Calc/Calc.h"

int main()
{
  int number;
  std::cout << "Please input an integer:\n";
  std::cin >> number;
  std::cout << "Square of: " << number << " is: " << Calc::square(number) << '\n';
  std::cout << "Square root of: " << number << " is: " << Calc::squareRoot(number) << '\n';
  return 0;
}
