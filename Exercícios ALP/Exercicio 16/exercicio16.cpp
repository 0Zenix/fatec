#include <iostream>
#include <iomanip>

int main() {
  float dinheiro;


  std::cout << "Informe a quantidade de dinheiro em R$: ";
  std::cin >> dinheiro;

  //usando iomanip para limitar a qunatidade de casas decimais com "std::fixed" e "std::setprecision"
  std::cout << "R$" << dinheiro << " convertido para: " << std::endl
            << "Dolár: U$" << std::fixed << std::setprecision(2) <<dinheiro / 1.8 << std::endl
            << "Libra Esterlina: £" << std::fixed << std::setprecision(2) << dinheiro / 3.57 << std::endl
            << "Marco Alemão: ℳ " << std::fixed << std::setprecision(2) << dinheiro / 2 << std::endl;
}
