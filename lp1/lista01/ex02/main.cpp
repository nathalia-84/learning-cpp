/* Utilizando uma estrutura do tipo vector ou lista (escolha do aluno) crie um programa capaz de simular o comportamento de uma pilha (stack) e outro programa capaz de simular uma fila (queue). */
#include <iostream>
#include <cstring>
#include "Hfunctions.hpp"

using namespace std;

int main(int argc, char * argv[]) {

    if(strcmp(argv[1], "pilha") == 0) {
        simularPilha();
    } else if(strcmp(argv[1], "fila") == 0) {
        simularFila();
    } else {
        cout << "Insira uma opcao valida";
    }
    return 0;
}