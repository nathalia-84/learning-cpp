/* Escreva uma função recursiva chamada de potencia com
a seguinte assinatura:

int potencia(int base, int expoente);

Escreva um programa que chame a função acima para calcular uma
determinada potência através da base e expoente digitados. */


#include <iostream>

using namespace std;

int potencia(int base, int expoente) {
  if (expoente == 0) {
    return 1;
  } else {
    return base * potencia(base, expoente-1);
  }
}

int main() {
  cout << "Insira uma base: ";
  int base;
  cin >> base;
  cout << "Insira um expoente: ";
  int expoente;
  cin >> expoente;
  
  cout << "O resultado é: " << potencia(base, expoente);
}