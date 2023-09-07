#include <iostream>


int main() {
  float angulo1, angulo2;

  std::cout << "Informe o primeiro angulo em graus: ";
  std::cin >> angulo1;
  std::cout << "Informe o segundo angulo em graus: ";
  std::cin >> angulo2;
  
  std::cout << "O angulo alvo é de: " << 180 - (angulo1 + angulo2) << "°" << std::endl;
}