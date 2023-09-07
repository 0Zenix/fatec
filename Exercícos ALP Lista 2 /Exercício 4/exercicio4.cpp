#include <iostream>


int main() {
  float num1, num2, num3;

  std::cout << "Informe o primeiro número: ";
  std::cin >> num1;
  std::cout << "Informe o segundo número: ";
  std::cin >> num2;
  std::cout << "Informe o terceiro número: ";
  std::cin >> num3;
  
  if(num1 > num2 && num1 > num3) {
    std::cout << num1 << " é o maior" << std::endl;
  } else if (num2 > num3){
    std::cout << num2 << " é o maior" << std::endl;
  } else {
    std::cout << num3 << " é o maior" << std::endl;   
  }
}