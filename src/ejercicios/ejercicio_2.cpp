#include <iostream>
#include "enlace.h"

using namespace std;

/* Escriba un programa que pida un número N e imprima en pantalla si es par o impar. Ej: si se ingresa 5 se debe imprimir: 5 es impar*/

void ejercicio_2() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " es par" << endl;
    } else {
        cout << n << " es impar" << endl;
    }
}
