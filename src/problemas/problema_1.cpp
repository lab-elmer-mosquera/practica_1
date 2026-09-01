#include "enlace.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*Problema 1. Escriba un programa que identi que si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje según el caso.
 * Nota: el formato de salida debe ser: no es una letra. a es una vocal. 5C es una consonante.*/

void problema_1() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;

    bool esLetra = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');

    if (!esLetra) {
        cout << c << " no es una letra." << endl;
    } else {
        char cMin = c;
        if (c >= 'A' && c <= 'Z') {
            cMin = c + 32; // convierte de mayuscula a minuscula
        }
        if (cMin == 'a' || cMin == 'e' || cMin == 'i' || cMin == 'o' || cMin == 'u') {
            cout << c << " es una vocal." << endl;
        } else {
            cout << c << " es una consonante." << endl;
        }
    }
}
