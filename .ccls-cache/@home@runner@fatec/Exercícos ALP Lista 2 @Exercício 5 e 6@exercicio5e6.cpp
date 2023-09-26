#include <iostream>
#include <math.h>
#include <string>

int main() {

  float num1, num2;

  std::cout << "Informe o primeiro número: ";
  std::cin >> num1;
  std::cout << "Informe o segundo número: ";
  std::cin >> num2;

  int select; 
  std::cout << "Escolha uma operação" << std::endl 
            << " [1] Média [2] Diferença [3] Produto [4] Divisão" 
            << " [5] Potência [7] Raiz Quadrada [8] Raiz cúbica"  << std::endl;
  std::cin >> select;

  switch (select)
  {
    case 1:
      std::cout << "A média entre os números é: " << (num1 + num2) / 2 << std::endl;
      break;

    case 2:
      std::cout << "A diference entre o maior e o menor é: " << fabs( num1 - num2 ) << std::endl;
      break;

    case 3:
      std::cout << "O produto entre os números é: " << num1 * num2 << std::endl;
      break;

    case 4:
      try
      {
        if (num2 == 0)
        {
          throw 505;
        }

        float div = num1 / num2;
        std::cout << "A divisão entre os números é: " << div << std::endl;
      }
      catch(...)
      {
        std::cout << "A divisão não pode ser efetuada pois o denominador é 0!" << std::endl;
        std::cout << "Redigite o segundo número: ";
        std::cin >> num2;
      }
      break;
    case 5:
      std::cout << "O primeiro número elavado ao segundo é: " <<  pow(num1, num2) << std::endl;
      break;
    case 6:
      std::cout << "A raiz quadrado do primeiro é: " << sqrt(num1) 
                << "e a raiz do segundo é: " << sqrt(num2) << std::endl;
      break;
    case 7:
      std::cout << "A raiz cúbica do primeiro é: " << cbrt(num1) 
                << "e a raiz do segundo é: " << cbrt(num2) << std::endl;    
      break;
    default:
      std::cout << "Opção inválida" << std::endl;
      break;
    }
  
}