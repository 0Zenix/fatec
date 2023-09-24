#include <iostream>


long factorial(int number) {
  int fatorial = 1;

  for (int i = 1; i <= number; i++) {
    fatorial *= i;
  }
  
  return fatorial;
}

int main() {
  float acc = 0;
  float division = 19;
  int target = 10;

  for (int n = target; n > 0; n--, division -= 2) {
    acc += factorial(n) * 10 / division;
  }
  
  std::cout << acc << std::endl;

  //devido a maneira que o tipo float e double são estruturados se torna impossível receber uma resposta prescisa.
}