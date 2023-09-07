#include <iostream>

int main() {
    float salario, preco_produto, vendas, novo_salario;

    std::cout << "Informe o salário: ";
    std::cin >> salario;

    std::cout << "Informe o preço do produto: ";
    std::cin >> preco_produto;

    std::cout << "Informe a quantidade de produtos vendidos: ";
    std::cin >> vendas;

    novo_salario = salario + (preco_produto * vendas * 0.04);
    std::cout << "O novo salário será: " << novo_salario << std::endl;
}