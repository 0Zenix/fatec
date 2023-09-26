#include <iostream>
#include <math.h>

// Tempo entre cidades
int main() {
  float cidade1 = 0;
  float cidade2 = 0;

  std::cout << "Digite a quilometragem da primeira cidade: ";
  std::cin >> cidade1;
  std::cout << "Digite a quilometragem da segunda cidade: ";
  std::cin >> cidade2;

  for (int vel = 20; vel <= 80; vel += 10) {
    std::cout << "O tempo que irá levar para viajar entre as ciades à " << vel
              << "km/h é de: " << abs(cidade1 - cidade2) / vel << " horas";
  }
}
