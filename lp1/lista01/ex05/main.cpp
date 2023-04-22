/* Escreva um programa que salve em um arquivo o nome de um aluno seguido de suas três notas. O programa deve permitir que sejam salvos no arquivo quantos alunos forem necessários e suas respectivas notas.
Em seguida seu programa deve ler o arquivo e calcular a média de cada aluno salvando em um map<string, double> o nome do aluno e sua média, respectivamente. Por último, esse map deverá ser impresso no terminal.
OBS: crie uma função para escrever no arquivo, outra para ler o arquivo e uma última para inserir os dados em um map. */

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

struct Aluno
{
    string nome;
    double nota1;
    double nota2;
    double nota3;
};

void escreverNoArquivo(string nome, double nota1, double nota2, double nota3)
{
    fstream arquivo;
    arquivo.open("notas.txt", ios::out | ios::app);
    arquivo << nome << endl;
    arquivo << nota1 << endl;
    arquivo << nota2 << endl;
    arquivo << nota3 << endl;
    arquivo.close();
}



map<string, double> lerArquivo()
{
    map<string, double> medias;
    fstream arquivo;
    arquivo.open("notas.txt", ios::in);

    string linha;

    while (getline(arquivo, linha))
    {
        Aluno aluno;
        aluno.nome = linha;

        getline(arquivo, linha);
        aluno.nota1 = stod(linha);

        getline(arquivo, linha);
        aluno.nota2 = stod(linha);

        getline(arquivo, linha);
        aluno.nota3 = stod(linha);

        double media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;

        medias[aluno.nome] = media;
    }

    return medias;

    
}

int main()
{

    while (true)
    {
        cout << "Inserir notas de um aluno no arquivo? [y/n]: ";
        char opt;
        cin >> opt;
        if (opt == 'y' || opt == 'Y')
        {
            string nome;
            double nota1, nota2, nota3;

            cout << "Digite o nome do aluno: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Insira a nota #1: ";
            cin >> nota1;
            cout << "Insira a nota #2: ";
            cin >> nota2;
            cout << "Insira a nota #3: ";
            cin >> nota3;

            escreverNoArquivo(nome, nota1, nota2, nota3);
        }
        else
        {
            break;
        }
    }
    map<string, double> medias = lerArquivo();

    if (!medias.empty())
    {
        for (auto i : medias)
        {
            cout << "Media do aluno " << i.first << ": " << fixed << setprecision(2) << i.second << "." << endl;
        }
    }
    else
    {
        cout << "Nenhuma informacao foi inserida. Tente novamente." << endl;
    }
    return 0;
}