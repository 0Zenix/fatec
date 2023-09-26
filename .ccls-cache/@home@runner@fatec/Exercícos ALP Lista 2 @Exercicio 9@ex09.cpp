#include <iostream>
#include <math.h>

int main() {
  std::string imc_homens = "";
  int total_meninas = 0;
  int total_meninas_alt = 0;
  int total_homens = 0;
  int total_pacientes = 0;
  int mulheres_jovens = 0; // Mulheres menores de vinte acompanhadas
  int total_idosos = 0;

  // Percentual de criancas menores ou igual a 12 e altura superior a 1.20
  float percentual_criancas = 0;

  int rodando = 1; // 1 = rodando, outros = parado

  while (rodando == 1) {
    int idade = 0;
    std::string sexo = "";
    float peso = 0;
    float altura = 0;
    std::string acompanhante = "";

    std::cout << "Digite a idade do paciente: ";
    std::cin >> idade;

    std::cout << "Digite o sexo do paciente [F] Feminino [M] Masculino: ";
    std::cin >> sexo;

    std::cout << "Digite o peso do paciente: ";
    std::cin >> peso;

    std::cout << "Digite a altura do paciente: ";
    std::cin >> altura;

    std::cout << "Digite o nome do acompanhante, deixe vazio se não houver"
              << std::endl;
    std::getline(std::cin, acompanhante);

    total_pacientes += 1;

    if (sexo[0] == 'M' || sexo[0] == 'm') {
      total_homens += 1;
      float imc = peso / pow(altura, 2);
      imc_homens += std::to_string(peso) + "/" + std::to_string(altura) +
                    "^2 = " + std::to_string(imc);
    }

    if (sexo[0] == 'F' || sexo[0] == 'f') {

      if (idade < 20 && !acompanhante.empty()) {
        mulheres_jovens += 1;
      }

      if (idade <= 12) {
        total_meninas += 1;
        if (altura > 1.2) {
          total_meninas_alt += 1;
        }
      }
    }

    if (idade >= 60) {
      total_idosos += 1;
    }

    std::cout << "Deseja adicionar um novo paciente? [1] Sim [0] Não"
              << std::endl;
    std::cin >> rodando;
  }

  std::cout << "O total de paciente atendidos: " << total_pacientes
            << std::endl;
  std::cout << "O total de homens é " << total_homens
            << " e seus IMCs: " << imc_homens << std::endl;
  std::cout << "O total de mulheres menores de 20 anos acompanhadas: "
            << mulheres_jovens << std::endl;
  std::cout << "O total de pacientes idosos: " << total_idosos << std::endl;
  std::cout << "O percentual de meninas menores de 12 anos e com altura "
               "superior a 1.20 é de: "
            << (total_meninas_alt / total_meninas) * 100.0 << "%";
}