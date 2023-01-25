#include <iostream>

int main()
{
  int num1 = 22;
  int num2 = 022;
  int num3 = 0x3a3;
  int num4 = 0b10101;
  int a(3.5);

  std::cout << "Number 1: " << num1 << std::endl;
  std::cout << "Number 2: " << num2 << std::endl;
  std::cout << "Number 3: " << num3 << std::endl;
  std::cout << "Number 4: " << num4 << std::endl;
  std::cout << "Number a: " << a << std::endl;

  std::cout << "Size of int : " << sizeof(int) << std::endl;
  std::cout << "Size of int : " << sizeof(int) << std::endl;
  std::cout << sizeof(signed) << std::endl;
  return 0;
}