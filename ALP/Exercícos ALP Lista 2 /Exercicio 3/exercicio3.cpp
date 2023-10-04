#include <iostream>


int main() {
  float num1, num2;

  std::cout << "Informe o primeiro número: ";
  std::cin >> num1;
  std::cout << "Informe o segundo número: ";
  std::cin >> num2;
  
  if(num1 < num2) {
    std::cout << num1 << " é o menor" << std::endl;
  } else {
    std::cout << num2 << " é o menor" << std::endl;
  }
}