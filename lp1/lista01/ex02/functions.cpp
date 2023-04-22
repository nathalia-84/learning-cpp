#include <iostream>
#include <list>

using namespace std;

void simularPilha()
{
    cout << "*******************************" << endl;
    cout << "*** Simular pilha com lista ***" << endl;
    cout << "*******************************" << endl;

    list<int> pilha;
    list<int>::iterator it;

    int option = 0;

    do
    {
        cout << "\nDigite uma opcao:" << endl;
        cout << "1 - Adicionar elementos na pilha:" << endl;
        cout << "2 - Remover elemento do topo da pilha" << endl;
        cout << "3 - Imprimir pilha atual" << endl;
        cout << "4 - Sair" << endl;
        cout << "> ";
        cin >> option;

        if (option == 1)
        {
            
            cout << "\nInsira um valor: ";
            int value;
            cin >> value;
            pilha.push_back(value);
        } else if (option == 2)
        {
            if (pilha.empty())
            {
                cout << "A pilha esta vazia." << endl;
            }
            else
            {
                cout << "\n******************************" << endl;
                cout << "O elemento " << pilha.back() << " foi removido." << endl;
                cout << "******************************" << endl;
                pilha.pop_back();
            }
        } else if (option == 3)
        {
            if (pilha.empty())
            {
                cout << "\nA pilha esta vazia." << endl;
            }
            else
            {
                cout << "\n******************************" << endl;
                cout << "Pilha Atual: ";
                for (it = pilha.begin(); it != pilha.end(); ++it)
                {
                    cout << *it << " ";
                }
                cout << "\n******************************" << endl;
            }
        } else
        {
            if (option != 4) {
                cout << "\n***********************" << endl;
                cout << "Insira uma opcao valida";
                cout << "***********************" << endl;
            }
            
        }
    } while (option != 4);
}

void simularFila()
{
    cout << "******************************" << endl;
    cout << "*** Simular fila com lista ***" << endl;
    cout << "******************************" << endl;

    list<int> fila;
    list<int>::iterator it;

    int option = 0;

    do
    {
        cout << "\nDigite uma opcao:" << endl;
        cout << "1 - Adicionar elementos na fila:" << endl;
        cout << "2 - Remover elemento da frente da fila" << endl;
        cout << "3 - Imprimir fila atual" << endl;
        cout << "4 - Sair" << endl;
        cout << "> ";
        cin >> option;

        if (option == 1)
        {
            
            cout << "\nInsira um valor: ";
            int value;
            cin >> value;
            fila.push_back(value);
        } else if (option == 2)
        {
            if (fila.empty())
            {
                cout << "A fila esta vazia." << endl;
            }
            else
            {
                cout << "\n******************************" << endl;
                cout << "O elemento " << fila.front() << " foi removido." << endl;
                cout << "******************************" << endl;
                fila.pop_front();
            }
        } else if (option == 3)
        {
            if (fila.empty())
            {
                cout << "\nA fila esta vazia." << endl;
            }
            else
            {
                cout << "\n******************************" << endl;
                cout << "Fila Atual: ";
                for (it = fila.begin(); it != fila.end(); ++it)
                {
                    cout << *it << " ";
                }
                cout << "\n******************************" << endl;
            }
        } else
        {
            if (option != 4) {
                cout << "\n***********************" << endl;
                cout << "Insira uma opcao valida";
                cout << "***********************" << endl;
            }
            
        }
    } while (option != 4);
}