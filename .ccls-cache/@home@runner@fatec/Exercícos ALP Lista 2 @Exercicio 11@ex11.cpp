#include <iostream>

int main() {

  float mult = 0;

  std::cout << "Digite um número para a tabuada ser gerada: ";
  std::cin >> mult;

  for (int i = 0; i <= 10; i++) {
    std::cout << mult << " X " << i << " = " << mult * i << std::endl;
  }
}
