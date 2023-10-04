#include <iostream>


int main() {
  float nota1, nota2;

  std::cout << "Informe a primeira nota: ";
  std::cin >> nota1;
  std::cout << "Informe a segunda nota: ";
  std::cin >> nota2;

  float med = (nota1 + nota2) / 2;
  
  std::cout << "A sua média foi " << med << std::endl;

  if(med >= 7) {
    std::cout << "Aprovado" << std::endl;
  } else if(med < 7 && med >= 3) {
    std::cout << "Exame" << std::endl;
  } else {
    std::cout << "Reprovado" << std::endl;
  }
}