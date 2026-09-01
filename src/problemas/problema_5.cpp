#include <iostream>
#include "enlace.h"
using std::cout;
using std::cin;
using std::endl;

using namespace std;

/* Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:
    *
   ***
  *****
 *******
 ******
  ***
   *
 * 6
 * El tamaño del patrón estará determinado un número entero impar que ingrese el usuario.
 * En el ejemplo mostrado, el tamaño de la gura es 7.*/

void problema_5() {
    int n;
    cout << "Ingrese un numero impar: ";
    cin >> n;

    // Parte de arriba: crece de 1 hasta n
    for (int fila = 1; fila <= n; fila += 2) {
        for (int esp = 0; esp < (n - fila) / 2; esp++) cout << " ";
        for (int ast = 0; ast < fila; ast++) cout << "*";
        cout << endl;
    }

    // Parte de abajo: decrece desde n-2 hasta 1
    for (int fila = n - 2; fila >= 1; fila -= 2) {
        for (int esp = 0; esp < (n - fila) / 2; esp++) cout << " ";
        for (int ast = 0; ast < fila; ast++) cout << "*";
        cout << endl;
    }
}
