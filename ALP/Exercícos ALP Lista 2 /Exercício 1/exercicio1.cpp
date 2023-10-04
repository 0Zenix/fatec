#include <iostream>


int main() {
  float nota1, nota2, nota3, nota4;

  std::cout << "Informe a primeira nota: ";
  std::cin >> nota1;
  std::cout << "Informe a segunda nota: ";
  std::cin >> nota2;
  std::cout << "Informe a terceira nota: ";
  std::cin >> nota3;
  std::cout << "Informe a quarta nota: ";
  std::cin >> nota4;

  float med = (nota1 + nota2 + nota3 + nota4) / 4;
  
  std::cout << "A sua média foi " << med << std::endl;

  if(med < 7) {
    std::cout << "Você foi reprovado!";
  } else {
    std::cout << "Você foi aprovado!";
  }
}