#include <iostream>
#include <string>

int main()
{
  // int age = 25;
  // std::cout << "Age: " << age << std::endl;
  // std::cerr << "Error message" << std::endl;
  // std::clog << "Log message" << std::endl;

  // int age1;
  // std::string name;

  // std::cout << "Enter you name and age: " << std::endl;
  // // std::cin >> name;
  // // std::cin >> age1;
  // std::cin >> name >> age1;

  // std::cout << "Hello, " << name << "."
  //           << " You are " << age1 << " years old." << std::endl;

  int age3;
  std::string full_name;

  std::cout << "Enter you full name and age: " << std::endl;
  std::getline(std::cin, full_name);
  std::cin >> age3;

  std::cout << "Hello, " << full_name << ". You are " << age3 << " years old." << std::endl;

  return 0;
}