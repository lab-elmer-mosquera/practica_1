#include <iostream>
#include "enlace.h"

using namespace std;

/* Escriba un programa que pida dos números AyB eimprima en pantalla el mayor. Ej:siseingresan7y3sedebeimprimir: Elmayores7*/

void ejercicio_3() {
    int a, b;
    cout << "Ingrese A: ";
    cin >> a;
    cout << "Ingrese B: ";
    cin >> b;

    if (a > b) {
        cout << "El mayor es " << a << endl;
    } else {
        cout << "El mayor es " << b << endl;
    }
}
