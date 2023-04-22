#include <iostream>
#include <cstring>
#include "Hfunctions.hpp"

using namespace std;

int main(int argc, char * argv[]) {
    int option;

    if(strcmp(argv[1], "triangulo") == 0) {
        option = 1;
    } else if(strcmp(argv[1], "circulo") == 0) {
        option = 2;
    } else if(strcmp(argv[1], "quadrado") == 0) {
        option = 3;
    } else if(strcmp(argv[1], "retangulo") == 0) {
        option = 4;
    } else {
        cout << "Insira uma opcao valida";
    }

    if (option == 1) {
        float base, height;
        cout << "Insira a base do Triangulo: ";
        cin >> base;
        cout << "Insira a altura do Triangulo: ";
        cin >> height;
        float area = areaTriangle(base, height);
        cout << "Area do Triangulo: " << area << endl;
    } if (option == 2) {
        float radius;
        cout << "Insira o raio do Circulo: ";
        cin >> radius;
        float area = areaCircle(radius); 
        cout << "Area do Circulo: " << area << endl;
    } if (option == 3) {
        float side;
        cout << "Insira a lado do Quadrado: ";
        cin >> side;
        float area = areaRectangle(side, side);
        cout << "Area do Quadrado: " << area << endl;
    } if (option == 4) {
        float base, height;
        cout << "Insira a base do Retangulo: ";
        cin >> base;
        cout << "Insira a altura do Retangulo: ";
        cin >> height;
        float area = areaRectangle(base, height);
        cout << "Area do Retangulo: " << area << endl;
    } 
    return 0;
}