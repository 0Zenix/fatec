#include <iostream>

//Detector de ano bissexto

int main() {

  int ano;

  std::cout << "Insira o ano: ";
  std::cin >> ano;

  if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) { 
    std::cout << "Esse ano possuí " << 24 * 365.25 << " horas" << std::endl;
  } else {
    std::cout << "Esse ano possuí " << 24 * 366 << " horas" << std::endl;
  }

  return 0;
}