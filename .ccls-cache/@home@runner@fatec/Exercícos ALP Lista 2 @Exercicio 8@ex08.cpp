#include <iostream>

//Detector de ano bissexto
using namespace std;

int main() {

  int ano;

  cout << "Insira o ano: ";
  cin >> ano;

  if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) { 
    cout << "É bissexto" << endl;
  } else {
    cout << "Não é bissexto" << endl;
  }

  return 0;
}