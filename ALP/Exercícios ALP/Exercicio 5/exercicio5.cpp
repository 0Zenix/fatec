#include <iostream>

int main() {
    float preco;

    std::cout << "Digite o preço do produto: R$";
    std::cin >> preco;

    std::cout << "O novo valor do produto é: R$" << preco * (1 - 0.1) << std::endl;
}