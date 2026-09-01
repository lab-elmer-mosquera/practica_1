#include <iostream>
#include "enlace.h"
using std::cout;
using std::cin;
using std::endl;

using namespace std;

/* Escriba un programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos.
 * El caso más especial es el 29 de febrero, en dicho caso imprimir posiblemente año bisiesto. Nota: el formato de salida debe ser:
 * 14 es un mes invalido. 31/4 es una fecha invalida. 27/4 es una fecha valida. 29/2 es valida en bisiesto.*/


void problema_3() {
    int mes, dia;
    cout << "Ingrese el mes: ";
    cin >> mes;

    if (mes < 1 || mes > 12) {
        cout << mes << " es un mes invalido." << endl;
        return;
    }

    cout << "Ingrese el dia: ";
    cin >> dia;



    int maxDias;
    if (mes == 1) maxDias = 31;
    else if (mes == 2) maxDias = 28;
    else if (mes == 3) maxDias = 31;
    else if (mes == 4) maxDias = 30;
    else if (mes == 5) maxDias = 31;
    else if (mes == 6) maxDias = 30;
    else if (mes == 7) maxDias = 31;
    else if (mes == 8) maxDias = 31;
    else if (mes == 9) maxDias = 30;
    else if (mes == 10) maxDias = 31;
    else if (mes == 11) maxDias = 30;
    else maxDias = 31;

    if (mes == 2 && dia == 29) {
        cout << dia << "/" << mes << " es valida en bisiesto." << endl;
    } else if (dia < 1 || dia > maxDias) {
        cout << dia << "/" << mes << " es una fecha invalida." << endl;
    } else {
        cout << dia << "/" << mes << " es una fecha valida." << endl;
    }
}
