#include <iostream>

int main() {

    float peso;

    std::cout << "Informe o seu peso em kg: ";
    std::cin >> peso;

    std::cout << "O peso em gramas é: " << peso * 1000 << "g" << std::endl;
}