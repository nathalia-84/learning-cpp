/* Escreva um programa em C++ que leia três notas e o nome de um aluno e em seguida armazene esse nome como chave e as notas como valor em um map. E por fim, calcule a média das notas dos alunos. */
#include <iostream>

#include <map>

using namespace std;

struct Aluno {
  int nota1;
  int nota2;
  int nota3;
  int media;
};

int media(Aluno aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3)/3;
}

int main() {
  
  map<string, Aluno> infoDoAluno;

  string nome;
  Aluno aluno;
  
  cout << "Insira o nome do aluno: ";
  cin >> nome;
  
  cout << "Insira a nota #1: ";
  cin >> aluno.nota1;
  
  cout << "Insira a nota #2: ";
  cin >> aluno.nota2;
  
  cout << "Insira a nota #3: ";
  cin >> aluno.nota3;
  
  aluno.media = media(aluno);
  
  infoDoAluno.insert(pair<string, Aluno>(nome, aluno));

  for (auto i : infoDoAluno) {
    cout << "A média do aluno " << i.first << " é " << i.second.media << "." << endl;
  }
  
  return 0;
}