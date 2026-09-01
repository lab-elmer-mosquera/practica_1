#include <iostream>
#include "enlace.h"

using namespace std;

// ============================================
// PROTOTIPOS DE LOS MENÚS
// ============================================

void imprimirMenuPrincipal();
void imprimirMenuEjercicios();
void imprimirMenuProblemas();

void ejecutarEjercicio(int opcion);
void ejecutarProblema(int opcion);


// ============================================
// FUNCIÓN PRINCIPAL
// ============================================

int main()
{
    int opcion;

    do
    {
        imprimirMenuPrincipal();
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            int opcionEjercicio;

            do
            {
                imprimirMenuEjercicios();
                cin >> opcionEjercicio;

                if (opcionEjercicio != 0)
                {
                    ejecutarEjercicio(opcionEjercicio);
                }

            } while (opcionEjercicio != 0);

            break;
        }

        case 2:
        {
            int opcionProblema;

            do
            {
                imprimirMenuProblemas();
                cin >> opcionProblema;

                if (opcionProblema != 0)
                {
                    ejecutarProblema(opcionProblema);
                }

            } while (opcionProblema != 0);

            break;
        }

        case 0:
            cout << endl;
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << endl;
            cout << "Opcion invalida." << endl;
        }

    } while (opcion != 0);

    return 0;
}


// ============================================
// MENU PRINCIPAL
// ============================================

void imprimirMenuPrincipal()
{
    cout << endl;
    cout << "===================================" << endl;
    cout << "       PRACTICA 1 - INFORMATICA II" << endl;
    cout << "===================================" << endl;
    cout << "1 - Ejercicios" << endl;
    cout << "2 - Problemas" << endl;
    cout << "0 - Salir" << endl;
    cout << "===================================" << endl;
    cout << "=> ";
}


// ============================================
// MENU DE EJERCICIOS
// ============================================

void imprimirMenuEjercicios()
{
    cout << endl;
    cout << "===================================" << endl;
    cout << "             EJERCICIOS" << endl;
    cout << "===================================" << endl;

    cout << "1  - Ejercicio 1" << endl;
    cout << "2  - Ejercicio 2" << endl;
    cout << "3  - Ejercicio 3" << endl;
    cout << "4  - Ejercicio 4" << endl;
    cout << "5  - Ejercicio 5" << endl;
    cout << "6  - Ejercicio 6" << endl;
    cout << "7  - Ejercicio 7" << endl;
    cout << "8  - Ejercicio 8" << endl;
    cout << "9  - Ejercicio 9" << endl;
    cout << "10 - Ejercicio 10" << endl;
    cout << "11 - Ejercicio 11" << endl;
    cout << "12 - Ejercicio 12" << endl;
    cout << "13 - Ejercicio 13" << endl;
    cout << "14 - Ejercicio 14" << endl;
    cout << "15 - Ejercicio 15" << endl;
    cout << "16 - Ejercicio 16" << endl;
    cout << "17 - Ejercicio 17" << endl;
    cout << "18 - Ejercicio 18" << endl;
    cout << "19 - Ejercicio 19" << endl;
    cout << "20 - Ejercicio 20" << endl;
    cout << "21 - Ejercicio 21" << endl;
    cout << "22 - Ejercicio 22" << endl;
    cout << "23 - Ejercicio 23" << endl;
    cout << "24 - Ejercicio 24" << endl;
    cout << "25 - Ejercicio 25" << endl;
    cout << "26 - Ejercicio 26" << endl;
    cout << "27 - Ejercicio 27" << endl;
    cout << "28 - Ejercicio 28" << endl;
    cout << "29 - Ejercicio 29" << endl;
    cout << "30 - Ejercicio 30" << endl;

    cout << "0  - Volver" << endl;

    cout << "===================================" << endl;
    cout << "=> ";
}


// ============================================
// MENU DE PROBLEMAS
// ============================================

void imprimirMenuProblemas()
{
    cout << endl;
    cout << "===================================" << endl;
    cout << "              PROBLEMAS" << endl;
    cout << "===================================" << endl;

    cout << "1  - Problema 1" << endl;
    cout << "2  - Problema 2" << endl;
    cout << "3  - Problema 3" << endl;
    cout << "4  - Problema 4" << endl;
    cout << "5  - Problema 5" << endl;
    cout << "6  - Problema 6" << endl;
    cout << "7  - Problema 7" << endl;
    cout << "8  - Problema 8" << endl;
    cout << "9  - Problema 9" << endl;
    cout << "10 - Problema 10" << endl;
    cout << "11 - Problema 11" << endl;
    cout << "12 - Problema 12" << endl;
    cout << "13 - Problema 13" << endl;
    cout << "14 - Problema 14" << endl;
    cout << "15 - Problema 15" << endl;
    cout << "16 - Problema 16" << endl;
    cout << "17 - Problema 17" << endl;

    cout << "0  - Volver" << endl;

    cout << "===================================" << endl;
    cout << "=> ";
}


// ============================================
// EJECUTAR EJERCICIO
// ============================================

void ejecutarEjercicio(int opcion)
{
    switch (opcion)
    {
    case 1:
        ejercicio_1();
        break;

    case 2:
        ejercicio_2();
        break;

    case 3:
        ejercicio_3();
        break;

    case 4:
        ejercicio_4();
        break;

    case 5:
        ejercicio_5();
        break;

    case 6:
        ejercicio_6();
        break;

    case 7:
        ejercicio_7();
        break;

    case 8:
        ejercicio_8();
        break;

    case 9:
        ejercicio_9();
        break;

    case 10:
        ejercicio_10();
        break;

    case 11:
        ejercicio_11();
        break;

    case 12:
        ejercicio_12();
        break;

    case 13:
        ejercicio_13();
        break;

    case 14:
        ejercicio_14();
        break;

    case 15:
        ejercicio_15();
        break;

    case 16:
        ejercicio_16();
        break;

    case 17:
        ejercicio_17();
        break;

    case 18:
        ejercicio_18();
        break;

    case 19:
        ejercicio_19();
        break;

    case 20:
        ejercicio_20();
        break;

    case 21:
        ejercicio_21();
        break;

    case 22:
        ejercicio_22();
        break;

    case 23:
        ejercicio_23();
        break;

    case 24:
        ejercicio_24();
        break;

    case 25:
        ejercicio_25();
        break;

    case 26:
        ejercicio_26();
        break;

    case 27:
        ejercicio_27();
        break;

    case 28:
        ejercicio_28();
        break;

    case 29:
        ejercicio_29();
        break;

    case 30:
        ejercicio_30();
        break;

    default:
        cout << "Ejercicio invalido." << endl;
    }
}


// ============================================
// EJECUTAR PROBLEMA
// ============================================

void ejecutarProblema(int opcion)
{
    switch (opcion)
    {
    case 1:
        problema_1();
        break;

    case 2:
        problema_2();
        break;

    case 3:
        problema_3();
        break;

    case 4:
        problema_4();
        break;

    case 5:
        problema_5();
        break;

    case 6:
        problema_6();
        break;

    case 7:
        problema_7();
        break;

    case 8:
        problema_8();
        break;

    case 9:
        problema_9();
        break;

    case 10:
        problema_10();
        break;

    case 11:
        problema_11();
        break;

    case 12:
        problema_12();
        break;

    case 13:
        problema_13();
        break;

    case 14:
        problema_14();
        break;

    case 15:
        problema_15();
        break;

    case 16:
        problema_16();
        break;

    case 17:
        problema_17();
        break;

    default:
        cout << "Problema invalido." << endl;
    }
}
