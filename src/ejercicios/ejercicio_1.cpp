#include "enlace.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using namespace std;


/*Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la división A/B.
 * Ej: si se ingresan 8 y 3 se debe imprimir: El residuo de la division 8/3 es: 2 Nota: Nótese que la palabra división no tiene tílde,
 * esto no es un error tipográ co, es debido a que no se puede imprimir correctamente tíldes en la terminal. De ahora en adelante todos los ejemplos de salidas contendrán el mismo error tipográ
 * co.*/


void ejercicio_1() {
    int a, b;
    cout << " Ingres A: ";
    cin >> a;
    cout << " Ingrese B: ";
    cin >> b;

    cout << " El residuo de la division " << a << "/" << b << " es: " << a % b << endl;
}


