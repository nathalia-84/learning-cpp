#include <iostream>
#include <map>

using namespace std;

map<string, string> professores;

void criarProfessor(string nome, string disciplina){
    professores[nome] = disciplina;

}


void imprimirProfessor(){
    for(auto i : professores){
        cout<< "Nome: " << i.first << endl;
        cout<< "Disciplina: " << i.second << endl;
    }

}