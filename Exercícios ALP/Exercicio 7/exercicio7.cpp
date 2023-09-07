#include <iostream>

int main() {
    float peso;

    std::cout << "Informe o seu peso: ";
    std::cin >> peso;

    std::cout << "Se você engordar 15% o seu peso será: " << peso * (1+0.15) << "Kg" << std::endl;
    std::cout << "Se você emagrecer 20% o seu peso será: " << peso * (1-0.20) << "Kg" << std::endl;
}