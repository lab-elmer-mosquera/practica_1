#include <iostream>
#include "enlace.h"
using std::cout;
using std::cin;
using std::endl;

using namespace std;

/* Escriba un programa para leer dos números enteros con el siguiente signi cado:
 * el valor del primer número representa una hora del día en un reloj de 24 horas,
 * de modo que 1245 representa las doce y cuarenta y cinco de la tarde.
 * El segundo entero representa un tiempo de duración de la misma manera, por lo que 345 representa tres horas y 45 minutos.
 * El programa debe sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso 1630,
 * que es el tiempo de 3 horas y 45 minutos después de 12:45. Nota: el formato de salida debe ser: La hora es 1630.
 * Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados en inválido: 1560 es un tiempo invalido.*/


void problema_4() {
    int hora, duracion;
    cout << "ingresa la hora: ";
    cin >> hora;
    cout << "Ingresa la duracion ";
    cin >> duracion;

    int horaH = hora / 100, horaM = hora % 100;
    int durH = duracion / 100, durM = duracion % 100;

    if (horaH < 0 || horaH > 23 || horaM < 0 || horaM > 59) {
        cout << hora << " es untiempo invalido. " << endl;
        return;
    }
    if (durH < 0 || durM < 0 || durM > 59) {
        cout << duracion << " es un tiempo invalido." <<endl;
        return;
    }

    int totalM = horaM + durM;
    int totalH = hora + durH + totalM / 60;
    totalM = totalM % 60;
    totalH = totalH % 24;

    cout << "la hora es " << totalH * 100 + totalM << "." << endl;


}
