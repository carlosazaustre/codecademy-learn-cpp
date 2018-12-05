// Learn C++ with Codecademy
// Project: Dog Years

#include <iostream>

int main()
{
  std::string dog_name;
  int dog_age;
  int early_years;
  int later_years;
  int human_years;

  std::cout << "Enter your dog's name: ";
  std::cin >> dog_name;

  std::cout << "Enter your dog's age: ";
  std::cin >> dog_age;

  // The first two years of a dog's life count as 21 human years
  early_years = 21;

  // Each following year counts as 4 human years.
  later_years = (dog_age - 2) * 4;
  
  // Human age converted
  human_years = early_years + later_years;
  
  std::cout << "My name is " << dog_name << "! Ruff ruff, I am " << human_years << " years old in human years.\n";

  return 0;
}