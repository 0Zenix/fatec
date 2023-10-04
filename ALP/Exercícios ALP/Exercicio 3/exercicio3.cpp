#include <iostream>

int main() {
    float num1 = 0;
    float num2 = 0;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    try
    {
        std::cout << "Digite o segundo número: ";
        std::cin >> num2;

        if (num2 == 0)
        {
            throw 505;
        }
    }
    catch(...)
    {
        std::cout << "O segundo número deve ser diferente de zero!" << std::endl;
        std::cout << "Digite o segundo número: ";
        std::cin >> num2;
    }
    
    
    std::cout << "A divisão entre " << num1 << " e " << num2 << " é: " << num1 / num2 << std::endl;

}