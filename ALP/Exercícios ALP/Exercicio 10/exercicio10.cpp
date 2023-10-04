#include <iostream>

int main() {
    float salario_minimo, salario_atual;

    std::cout << "Informe o salário minimo: ";
    std::cin >> salario_minimo;
    std::cout << "Informe o seu salário: ";
    std::cin >> salario_atual;

    std::cout << "O salário atual em salários minimos é: " << salario_atual / salario_minimo << std::endl;
}