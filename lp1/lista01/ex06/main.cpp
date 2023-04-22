/* Crie um programa que escreve em um arquivo o nome de algumas músicas (definidas em tempo de execução). Em seguida, leia esse arquivo e procure dentro dele uma determinada música (string)informada durante a execução do programa. */

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> 
#include <cctype> 

using namespace std;

string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return tolower(c); });
    return str;
}

int main()
{

  fstream arquivo;

  int option = 0;
  do
  {
    cout << "\nDigite uma opcao: " << endl;
    cout << "1 - Inserir musica " << endl;
    cout << "2 - Pesquisar musica" << endl;
    cout << "3 - Sair" << endl;
    cout << ">";
    cin >> option;

    if (option == 1)
    {
      string musica;
      arquivo.open("listaDeMusicas.txt", ios::out | ios::app);
      cin.ignore();
      getline(cin, musica);
      arquivo << musica << endl;
      arquivo.close();
    }
    else if (option == 2)
    {
      string linha;
      arquivo.open("listaDeMusicas.txt", ios::in);
      cout << "\nDigite uma musica para pesquisar: ";
      string pesquisa;
      cin.ignore();            
      getline(cin, pesquisa); 
      while (getline(arquivo, linha))
      {
        linha = toLowerCase(linha);
        pesquisa = toLowerCase(pesquisa);
        if (linha == pesquisa)
        {
          cout << "Musica encontrada!" << endl;
          break;
        } 
      }
    }
    else
    {
      if (option != 3)
      {
        cout << "Insira uma opcao valida" << endl;
        break;
      }
    }
  } while (option != 3);
  return 0;
}