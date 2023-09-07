#include <iostream>

int main(){

    int num1 = 0;
    int num2 = 0;
    int result = 0;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    result = num1 - num2;

    std::cout << "O resultado da subtração entre os números é: " << result << std::endl;

    return 0;
}