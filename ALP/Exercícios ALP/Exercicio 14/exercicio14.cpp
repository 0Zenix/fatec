#include <iostream>
#include <math.h>

int main() {
  float raio, area, volume, comprimento;
  const float PI = 3.14;

  std::cout << "Informe o raio: ";
  std::cin >> raio;

  comprimento = 2 * PI * raio;
  area = 4 * PI * pow(raio, 2);
  volume = 4/3 * PI * pow(raio, 3);

  std::cout << "O comprimento da esféra é de: " << comprimento << std::endl;
  std::cout << "A área da esféra é de: " << area << std::endl;
  std::cout << "O volume da esféra é de: " << volume << std::endl;
}
