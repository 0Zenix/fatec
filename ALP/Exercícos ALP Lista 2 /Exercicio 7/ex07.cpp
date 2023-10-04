#include <iostream>

//Calculadora de série
float factorial(int number) {
  int fatorial = 1;

  for (int i = 1; i <= number; i++) {
    fatorial *= i;
  }
  
  return fatorial;
}

int main() {
  // acc = acumulador/soma
  float acc = 0;
  float div = 19;
  int fat_alvo = 10;

  for (int num = fat_alvo; num > 0; num--, div -= 2) {
    acc += factorial(num) / div;
  }
  
  std::cout << acc << std::endl;

  //devido a maneira que o tipo float e double são estruturados se torna impossível receber uma resposta prescisa.
}