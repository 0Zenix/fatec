#include <iostream>
#include <cmath>

int main() {
  float cateto1, cateto2;

  std::cout << "Informe o primeiro cateto: ";
  std::cin >> cateto1;

  std::cout << "Informe o segundp cateto: ";
  std::cin >> cateto2;

  std::cout << "A hipotenusa do triangulo informado é: " 
            << sqrt(pow(cateto1, 2) + pow(cateto2, 2)) << std::endl; 
}
