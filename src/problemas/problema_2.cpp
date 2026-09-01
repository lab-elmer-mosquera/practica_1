#include "enlace.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/* Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada.
 * Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
 * Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada.
 * Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla. Ej:
 * si se ingresa 47810, el programa debe imprimir: 50000 : 0 20000: 2 10000 : 0 5000: 1 2000 : 1 1000: 0 500 : 1 200: 1 100 : 1 50: 0 Faltante: 10  */

using namespace std;

void problema_2() {
    int cantidad;
    cout << "ingrese la cantidad: ";
    cin >> cantidad;

    int v50000 = cantidad / 50000;
    cantidad = cantidad % 50000;

    int v20000 = cantidad / 20000;
    cantidad = cantidad % 20000;

    int v10000 = cantidad / 10000;
    cantidad = cantidad % 10000;

    int v5000 = cantidad / 5000;
    cantidad = cantidad % 5000;

    int v2000 = cantidad / 2000;
    cantidad = cantidad % 2000;

    int v1000 = cantidad / 5000;
    cantidad = cantidad % 1000;

    int v500 = cantidad / 500;
    cantidad = cantidad % 500;

    int v200 = cantidad / 200;
    cantidad = cantidad % 200;

    int v100 = cantidad / 100;
    cantidad = cantidad % 100;

    int v50 = cantidad / 50;
    cantidad = cantidad % 50;

    cout << "50000 :" << v50000 << endl;
    cout << "20000 :" << v20000 << endl;
    cout << "10000 :" << v10000 << endl;
    cout << "5000 :" << v5000 << endl;
    cout << "2000 :" << v2000 << endl;
    cout << "1000 :" << v1000 << endl;
    cout << "500 :" << v500 << endl;
    cout << "200 :" << v200 << endl;
    cout << "100 :" << v100 << endl;
    cout << "50 :" << v50 << endl;
    cout << "Faltante: " << cantidad << endl;
}

