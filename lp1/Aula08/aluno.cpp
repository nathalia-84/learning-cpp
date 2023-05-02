#include <iostream>
#include <map>
#include <fstream>

using namespace std;


struct Notas{
    float nota01;
    float nota02;
    float nota03;
    float media;
};

map<string, Notas> alunos;

void criarAlunos(string nome, float nota1, float nota2, float nota3){
    alunos[nome].nota01 = nota1;
    alunos[nome].nota02 = nota2;
    alunos[nome].nota03 = nota3;
    alunos[nome].media = (nota1 + nota2 + nota3)/3;

    fstream arquivo;
    arquivo.open("alunosSalvos.txt", ios::out | ios::app);

    arquivo << nome << endl;
    arquivo << nota1 << endl;
    arquivo << nota2 << endl;
    arquivo << nota3 << endl;
    arquivo << alunos[nome].media << endl;
}


void imprimirAlunos(){
    for(auto i : alunos){
    cout << "Nome: " << i.first << endl;
    cout << "Nota 1: " << i.second.nota01 << endl;
    cout << "Nota 2: " << i.second.nota02 << endl;
    cout << "Nota 3: " << i.second.nota03 << endl;
    cout << "Media: " << i.second.media << endl;
    }
}

void deletarAluno(string nome){
    alunos.erase(nome);
    fstream arquivo;
    //Atualiza o arquivo.
    arquivo.open("alunosSalvos.txt", ios::out);
    for(auto i : alunos){
        arquivo << i.first << endl;
        arquivo <<  i.second.nota01 << endl;
        arquivo <<  i.second.nota02 << endl;
        arquivo <<  i.second.nota03 << endl;
        arquivo <<  i.second.media << endl;
    }



    
} 

    