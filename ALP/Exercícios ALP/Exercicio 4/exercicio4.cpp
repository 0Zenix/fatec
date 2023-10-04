#include <iostream>

int main() {
    float nota1 = 0;
    float nota2 = 0;
    float media = 0;

    std::cout << "Informe a primeira nota: ";
    std::cin >> nota1;
    std::cout << "Informe a segunda nota: ";
    std::cin >> nota2;

    media = ( (2 * nota1) + (3 * nota2) ) / 5; 

    std::cout << "A média ponderada das notas é " << media << std::endl;
}
