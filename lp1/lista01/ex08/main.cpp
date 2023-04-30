/* Escreva uma função recursiva que calcule a soma de
todos os números compreendidos entre os valores A e B passados por
parâmetro.*/

/* 1 2 3 4 5 6  = 21*/
#include <iostream>

using namespace std;

int soma(int a, int b) {
  if (b == a) {
    return a;
  } else {
    return b + soma(a, b-1);
  }
}

int main() {
  cout << "Insira o valor inicial: ";
  int a;
  cin >> a;
  cout << "Insira o valor final: ";
  int b;
  cin >> b;
  
  cout << "O resultado da soma de todos os números entre " << a << " e " << b << " é: " << soma(a, b);
}