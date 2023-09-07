#include <iostream>

int main() {

    float base_menor, base_maior, altura;

    std::cout << "Informe a base menor: ";
    std::cin >> base_menor;
    std::cout << "Informe a base maior: ";
    std::cin >> base_maior;
    std::cout << "Informe a altura: ";
    std::cin >> altura;

    std::cout << "O área do trapézio é: " << (base_menor + base_maior) * altura / 2 << std::endl;
}