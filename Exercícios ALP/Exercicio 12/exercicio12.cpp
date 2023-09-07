#include <iostream>

int main() {
    float salario, conta1, conta2, total;

    std::cout << "Informe o seu salário: ";
    std::cin >> salario;
    std::cout << "Informe o valor da primeira conta: ";
    std::cin >> conta1;
    std::cout << "Informe o valor da segunda conta: ";
    std::cin >> conta2;

    total = conta1 * (1+0.02) + conta2 * (1+0.02);

    std::cout << "Com o salario de R$" << salario << "e o total das contas a pagar sendo de R$" 
                << total << "restará R$" << salario - total << std::endl;
}
