#include <iostream>

int sum2(int num1, int num2)
{
  return num1 + num2;
}
int main()
{
  int num1 = 33;
  int num2 = 11;
  std::cout << "First number: " << num1 << std::endl;
  std::cout << "Second number: " << num2 << std::endl;
  std::cout << "Sum of 2 numbers: " << sum2(num1, num2) << std::endl;
  return 0;
}