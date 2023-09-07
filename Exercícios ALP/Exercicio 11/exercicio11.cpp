#include <iostream>

int main() {
    float ano_de_nascimento, ano_atual, idade;

    std::cout << "Informe o ano de nascimento: ";
    std::cin >> ano_de_nascimento;
    std::cout << "Informe o ano atual: ";
    std::cin >> ano_atual;

    idade = ano_atual - ano_de_nascimento;

    std::cout << "Sua idade é: " << std::endl;
    std::cout << "Em anos: " << idade << std::endl;
    std::cout << "Em meses: " << idade * 12 << std::endl;
    std::cout << "Em semanas: " << idade * 52 << std::endl;
    std::cout << "Em dias: " << idade * 365 << std::endl;
}
