#include <iostream>

int main() { 
    int num1, num2, num3;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;
    std::cout << "Digite o terceiro numero: ";
    std::cin >> num3;

    std::cout << "O resultado da multiplicação entre os números é: " << num1*num2*num3 << std::endl;

}