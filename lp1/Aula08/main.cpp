#include <iostream>
#include <map>
#include "aluno.hpp"
#include "professor.hpp"


using namespace std;

int main(){
    while(true){
        cout << "Digite um nome: ";
        string nome;
        cin >> nome;
        if(nome == "exit"){
            break;
        }
        cout << "Digite a nota 01: ";
        float nota1;
        cin >> nota1;
        cout << "Digite a nota 02: ";
        float nota2;
        cin >> nota2;
        cout << "Digite a nota 03: ";
        float nota3;
        cin >> nota3;

        criarAlunos(nome, nota1, nota2, nota3);
        criarProfessor(nome, nome);
    }

    imprimirAlunos();
    //imprimirProfessor();

}