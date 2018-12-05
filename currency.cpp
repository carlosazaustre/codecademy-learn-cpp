// Learn C++ with Codecademy
// Project: Piggy Bank

#include <iostream>

int main() 
{
  double p, q, c;
  double dollars;
  
  std::cout << "🇲🇽 Enter number of Mexican Pesos: ";
  std::cin >> p;
  
  std::cout << "🇬🇹 Enter number of Guatemalan Quetzals: ";
  std::cin >> q;
  
  std::cout << "🇸🇻 Enter number of Salvadoran Colóns: ";
  std::cin >> c;
  
  // Pesos to USD: 0.049
  // Quetzals to USD: 0.13
  // Cólons to USD: 0.11
  dollars = p * 0.049 + q * 0.13 + c * 0.11;
  
  std::cout << "US Dollars = $" << dollars << "\n";