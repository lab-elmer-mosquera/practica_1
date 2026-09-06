#include "problemas.h"
#include <iostream>

using std::cout, std::cin, std::endl;

/*

    Un programa que identifique si un caracter ingresado es una vocal, una consonante o
    ninguna de las dos e imprima un mensaje segun el caso.
        Por ejemplo
            si ingresa @, debe imprimir: @ no es una letra
            Si ingresa a, debe imprimir: a es una vocal
            Si ingresa C, debe imprimir: C es una consonante

*/

void problema_1(){
        cout << "Un programa que identifiqua si un caracter ingresado es una vocal, una consonante  ninguna de las dos e imprime un mensaje segun el caso.\n";

    char c{};
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

/*

    Un programa que determine la combinacion mınima de billetes y monedas para una cantidad
    dada. Los billetes disponibles son: $50.000, $20.000, $10.000, $5.000, $2.000, $1.000; las monedas:
    500, 200, 100, 50. Si no es posible distribuir la cantidad exacta entre las denominaciones disponibles,
    mostrar el faltante. Por ejemplo, para 47810:
        50000:0
        20000:2
        10000:0
        5000 :1
        2000 :1
        1000 :0
        500 :1
        200 :1
        100 :1
        50 :0
        Faltante:10

*/

void problema_2() {
    cout << "Un programa que determina la combinacion mınima de billetes y monedas\npara una cantidad dada.\nLos billetes disponibles son:\n- $50.000 - $20.000 - $10.000 - $5.000 - $2.000 - $1.000 \nlas monedas:\n- 500 - 200 - 100 - 50.\n";

    int monto{};

    cout << "Digite el monto a retirar: ";
    cin >> monto;

    if (monto <= 0) {
        cout << "Monto invalido " << monto << endl;
        return;
    }

    int restante{};

    restante = monto;

    cout << "Monto ingresado " << monto << "\n";
    cout << "50000: " << restante/50000 << "\n";
    restante %= 50000;
    cout << "20000: " << restante/20000 << "\n";
    restante %= 20000;
    cout << "10000: " << restante/10000 << "\n";
    restante %= 10000;
    cout << "5000:  " << restante/5000 << "\n";
    restante %= 5000;
    cout << "2000:  " << restante/2000 << "\n";
    restante %= 2000;
    cout << "1000:  " << restante/1000 << "\n";
    restante %= 1000;
    cout << "500:   " << restante/500 << "\n";
    restante %= 500;
    cout << "200:   " << restante/200 << "\n";
    restante %= 200;
    cout << "100:   " << restante/100 << "\n";
    restante %= 100;
    cout << "50:    " << restante/50 << "\n";
    restante %= 50;
    cout << "Faltante: " << restante << endl;
}

/*

    Un programa que reciba un mes y un dia e indique si la fecha es valida. Para 29/2, indicar:
    “es valida en anos bisiestos”.

*/

void problema_3(){
    cout << "Un programa que recibe un mes y un dia e indique si la fecha es valida. Para 29/2, indicar: \"es valida en anos bisiestos\"\n";

    char input[6]{};

    cout << "Ingrese un mes y un dia o solo un mes (eje: 31/12 o 12): ";
    cin >> input;
    cout << input;

    int fecha[2]{};
    const int DiasValidos[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    bool isNum{}, separadorEncontrado{};


    for (char c : input) {
        isNum = (c >= '0' && c <= '9');

        if (!isNum && c != 0){
            if (c == '/' && !separadorEncontrado){
                separadorEncontrado = true;
                continue;
            }
            cout << " entrada invalida" << endl;
            return;
        }
        if (isNum && !separadorEncontrado)
            fecha[0] = fecha[0] * 10 + (c - '0');
        else if (isNum && separadorEncontrado)
            fecha[1] = fecha[1] * 10 + (c - '0');
    }

    if (!separadorEncontrado) {
        if (fecha[0] > 12 || fecha[0] == 0 )
            cout << " es un mes invalido" << endl;
        else
            cout << " es un mes valido" << endl;
        return;
    } else if (separadorEncontrado && fecha[1] != 0 && fecha[1] <= 12 && fecha[0] != 0){
        if (fecha[1] == 2 && fecha[0] == 29){
            cout << " es valido en bisiesto" << endl;
            return;
        }
        if (fecha[0] <= DiasValidos[fecha[1]-1]){
            cout << " es una fecha valida" << endl;
            return;
        }
    }


    cout << " es una fecha invalida" << endl;
}

/*
    un programa que sume dos tiempos en formato HHMM, donde el primer entero representa
    una hora (p.ej., 1245 = 12:45) y el segundo entero representa una duracion (2570 = 25 horas y 70
    minutos)
*/
void problema_4(){
    cout << "un programa que sume dos tiempos en formato HHMM, donde el primer entero representa una hora (p.ej., 1245 = 12:45) y el segundo entero representa una duracion (2570 = 25 horas y 70 minutos)\n";

    char input[4]{};

    cout << "Ingrese una hora en formato HHMM (ej. 1402 o 0212): ";
    cin >> input;

    int hora[3]{}, minuto[3]{}, nCaracteres[2]{};
    bool entradaInvalida{};

    for (char c : input){
        if (c >= '0' && c <= '9' && nCaracteres[0] < 2){
            hora[0] = hora[0] * 10 + (c-'0');
            nCaracteres[0]++;
            continue;
        }
        if (c >= '0' && c <= '9' && nCaracteres[1] < 2){
            minuto[0] = minuto[0] * 10 + (c-'0');
            nCaracteres[1]++;
            continue;
        }
        entradaInvalida = true;
    }

    if (entradaInvalida || !(hora[0] >= 0 && hora[0] <= 23) || !(minuto[0] >= 0 && minuto[0] <= 59)){
        cout << input << " es un tiempo invalido" << endl;
        return;
    }

    nCaracteres[0] = 0;
    nCaracteres[1] = 0;
    entradaInvalida = false;
    input[0] = 0;

    cout << "Ingrese una duracion en formato HHMM (ej. 2615 o 0280): ";
    cin >> input;

    for (char c : input){
        if (c >= '0' && c <= '9' && nCaracteres[0] < 2){
            hora[1] = hora[1] * 10 + (c-'0');
            nCaracteres[0]++;
            continue;
        }
        if (c >= '0' && c <= '9' && nCaracteres[1] < 2){
            minuto[1] = minuto[1] * 10 + (c-'0');
            nCaracteres[1]++;
            continue;
        }
        entradaInvalida = true;
    }

    if (entradaInvalida) {
        cout << " entrada invalida";
    }

    int auxTiempo[2]{};

    auxTiempo[0] = hora[0] + hora[1];
    auxTiempo[1] = minuto[0] + minuto[1];

    auxTiempo[0] = (auxTiempo[0]%24) + (auxTiempo[1]/60);
    auxTiempo[1] %= 60;


    // cout << " Hora: " << hora[0] << " Minuto: " << minuto[0] << endl;
    // cout << " Duracion Hora: " << hora[1] << " Duracion  Minuto: " << minuto[1] << endl;
    // cout << " Suma Hora: " << auxTiempo[0] << " Suma  Minuto: " << auxTiempo[1] << endl;
    cout << "La hora resultante es: " << auxTiempo[0] << ":" << auxTiempo[1] << endl;
}


/*
    un programa que reciba un numero impar e imprima el patron mostrado a continuacion.
    Si se ingresa 7 se debe imprimir
        *
        ***
        *****
        *******
        ******
        ***
        *
*/
void problema_5(){

    cout << "un programa que reciba un numero impar e imprima el patron mostrado a continuacion.\n";
    cout << "Si se ingresa 7 se debe imprimir\n";
    cout << "    *\n";
    cout << "    ***\n";
    cout << "    *****\n";
    cout << "    *******\n";
    cout << "    *****\n";
    cout << "    ***\n";
    cout << "    *" << endl;

    int num{};

    cout << "Ingrese un numero impar: ";
    cin >> num;

    if (!(num >= 1 && ((num%2)==1))){
        cout << " entrada invalida";
        return;
    }


    for (int i = 1; i <= num; i+=2){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = num-2; i >= 1; i-=2){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }

}

/*

    Un programa que aproxima el número e según la serie infinita:

    e = 1/0! + 1/1! + 1/2! + 1/3! + ...

    El usuario debe ingresar el número de términos.

    Para 3 términos el programa debe imprimir:
    e es aproximadamente: 2.5
*/
void problema_6(){
    cout << "Un programa que aproxima el número e según la serie infinita:\ne = 1/0! + 1/1! + 1/2! + 1/3! + ...\n";

    float n{}, euler = 1;

    cout << "Ingrese el numero de terminos que desea ver\n>";
    cin >> n;

    if (n<=0){
        cout << "entrada invalida";
        return;
    }

    for (int i = 1, auxFactorial = 1; i < n; i++, auxFactorial *= i){
        euler += 1/(float)auxFactorial;
    }
    cout << "e es aproximadamente: " << euler << endl;
}

/*
    Un programa que pida al usuario que ingrese un número N. Sume los pares de la serie de Fibonacci menores a N e imprima el resultado en consola.

    Por ejemplo, si ingresa 10, debe imprimir:
    El resultado de la suma es: 10

*/
void problema_7(){
    cout << "Un programa que pide al usuario que ingrese un número N. Sume los pares de la serie de Fibonacci menores a N e imprime el resultado en consola.\n";

    int n{}, suma{};

    cout << "Digite un numero natural\n>";
    cin >> n;

    if (n < 0){
        cout << "entrada invalida" << endl;
        return;
    }

    cout << "Serie fibonachi: ";
    for (int auxFibo{}, auxFiAn = 1, fibonacci{}; fibonacci <= n; fibonacci = (auxFibo+auxFiAn), auxFibo=auxFiAn, auxFiAn=fibonacci){
        if ((fibonacci%2)==0)
            suma+=fibonacci;
    }

    cout << "\nEl resultado de la suma es: " << suma << endl;
}

/*

    Un programa que solicite al usuario tres números a, b y c. Después de esto, sume todos los múltiplos de a (ma1, ma2 ... , man) y b (mb1, mb2 ... , mbn) menores que c, sin duplicar aquellos que sean comunes entre ambos.

    Por ejemplo, para los valores a = 6, b = 12, c = 30, debe imprimir:
    6+12+18+24 = 60


*/
void problema_8(){
    cout << "Un programa que solicite al usuario tres números a, b y c. Después de esto, sume todos los múltiplos de a (ma1, ma2 ... , man) y b (mb1, mb2 ... , mbn) menores que c, sin duplicar aquellos que sean comunes entre ambos\n";

    int input[3]{}, sumatoria{}, mayor{}, menor{};

    for (int i = 0; i < 3; i++) {
        cout << "Digite el " << i << " numero: ";
        cin>> input[i];
    }

    if (input[2] < input[1] && input[2] < input[0]) {
        cout << "entrada invalida";
        return;
    }

    mayor = input[0] > input[1] ? input[0] : input[1];
    menor = mayor == input[0] ? input[1] : input[0];

    for (int i = menor; i < input[2]; i++){
        if ((i%menor)==0 && (i%mayor)==0){
            sumatoria+=i;
            if (menor==mayor && menor!=i)
                cout << "+";
            cout << i;
            continue;
        }
        if ((i%menor)==0 && (i%mayor)!=0){
            sumatoria+=i;
            if (i!=menor){
                cout << "+";
            }
            cout << i;
            continue;
        }
        if ((i%menor)!=0 && (i%mayor)==0){
            sumatoria+=i;
            cout << "+" << i;
            continue;
        }
    }

    cout << " = " << sumatoria << endl;

}

/*

    Un programa que reciba un número N y luego sume los dígitos de N elevados a sí mismos e imprima el resultado en pantalla.

    Por ejemplo, para el número 1223 (1^1 + 2^2 + 2^2 + 3^3 = 36), debe imprimir:
    El resultado de la suma es: 36


*/
void problema_9(){

    cout << "Un programa que recibe un número N y luego suma los dígitos de N elevados a sí mismos e imprima el resultado en pantalla.\n";

    char input[10]{};

    cout << "Digite un numero: ";
    cin >> input;

    for (char c : input){
        if (c == 0)
            break;
        if (c >= '0' && c <= '9')
            continue;
        cout << input << "entrada invalida";
        return;
    }

    int suma{}, auxPotencia{};

    for (char c : input){
        if (c == 0)
            break;
        auxPotencia = c-'0';
        for (int i=1, d = c-'0'; i < d; i++){
            auxPotencia*=d;
        }
        suma+=auxPotencia;
    }
    cout << "El resultado de la suma es: " << suma << endl;
}

/*

    Un programa que reciba un número N e imprima el enésimo número primo.

    Por ejemplo, si el usuario ingresa 4, se debe imprimir:
    El primo número 4 es: 7


*/
void problema_10(){
    cout << "Un programa que recibe un número N e imprime el enésimo número primo\n";
    int n{}, nPrimo{};

    cout << "Ingrese un numero natural: ";
    cin >> n;

    if (n<1){
        cout << "entrada invalida";
        return;
    }

    bool noEsPrimo{};

    for (int it = 1, count = 0; count <= n; it++) {
        noEsPrimo = false;
        for (int i = 1; i < it; i++) {
            if (it%i==0 && i!=it && i>1){
                noEsPrimo=true;
                break;
            }
        }
        if (!noEsPrimo){
            nPrimo = it;
            count++;
        }
    }

    cout << "El primo número " << n << " es: " << nPrimo << endl;
}

/*

    Un programa que reciba un número N y calcule el MCM de los números enteros entre 1 y N.

    Por ejemplo, para N = 4, el programa debe imprimir:
    El mínimo comun múltiplo es: 12

*/
void problema_11(){
    cout << "Un programa que recibe un número N y calcula el MCM de los números enteros entre 1 y N\n";

    int n{}, mnm{};

    cout << "Digite un numero natural: ";
    cin >> n;

    if (n <= 0){
        cout << "entrada invalida" << endl;
        return;
    }
    if (n==1){
        cout << "El minimo comun multiplo entre 1 y 1 es 1";
    }

    bool noEsMCM = false;

    for (int i = 1, auxMul{}; mnm == 0; i++, noEsMCM = false) {
        auxMul = n * i;
        for (int j = n; j >= 1; j--) {
            if ((auxMul%j)!=0){
                noEsMCM = true;
                // cout << "No es: " << auxMul << "\n";
                break;
            }
        }
        if (!noEsMCM) {
            mnm = auxMul;
        }
    }
    cout << "El mínimo comun multiplo es: " << mnm << endl;
}

/*

    Un programa que reciba un número N y calcule el mayor factor primo de N.

    Para N = 33 el programa debe imprimir:
    El mayor factor primo de 33 es: 11

*/
void problema_12(){
    cout << "Un programa que recibe un número N y calcula el mayor factor primo de N.\n";

    int n{};
    bool noEsPrimo{};

    cout << "Ingrese un numero natural: ";
    cin >> n;

    if (n<=0){
        cout << "Entrada invalida" << endl;
        return;
    }

    if (n == 1){
        cout << "El mayor factor primo de 1 es 1" << endl;
    }


    for (int i = n; i >= 1; i--, noEsPrimo = false) {
        if (!(n%i==0)){
            continue;
        }
        for (int j = 1; j < i; j++) {
            if (i%j==0 && j>1){
                noEsPrimo=true;
                break;
            }
        }
        if (!noEsPrimo){
            cout << "El mayor factor primo de " << n << " es " << i;
            if (i==n) cout << " (prop. de n. primos)";
            cout << endl;
            return;
        }
    }

    cout << "Error desconocido" << endl;
}

/*

    Un programa que reciba un número N y sume todos los primos menores que N.

    Por ejemplo, para N = 10 el programa debe imprimir:
    El resultado de la suma es: 17

*/
void problema_13(){
    cout << "Un programa que recibe un número N y suma todos los primos menores que N\n" << endl;

    int n{}, sum{};

    cout << "Ingrese un numero natural: ";
    cin >> n;

    if (n<=0){
        cout << "entrada invalida" << endl;
        return;
    }

    bool noEsPrimo{};

    for (int it = n; it != 1; it--, noEsPrimo = false) {
        for (int i = 1; i < it; i++) {
            if (it%i==0 && i>1){
                noEsPrimo=true;
                break;
            }
        }
        if (!noEsPrimo){
            sum += it;
        }
    }
    if (n==1) sum = 1;
    cout << "El resultado de la suma es: " << sum << endl;
}

void problema_14(){
    cout << "Un programa que encuentra e imprime el número palíndromo más grande producto de dos números de 3 dígitos\n";

    int n1{}, n2{}, palindromo{}, multiplos[2];

    bool esPalindromo{};

    cout << "Ingrese un numero de 3 digitos: ";
    cin >> n1;

    cout << "Ingrese un numero 3 digitos distinto de " << n1 << ": ";
    cin >> n2;

    // Validación: ambos deben estar entre 0 y 999
    if (n1 < 100 || n1 > 999 || n2 < 100 || n2 > 999 || n1 == n2) {
        cout << "Entrada invalida" << endl;
        return;
    }

    if (n1 > n2) {
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for (int i = n2; i >= n1; --i) {

        for (int j = i; j >= n1; --j) {

            int auxPalindromo = i * j;

            if (auxPalindromo <= palindromo) {
                break;
            }

            int auxInverso = 0;
            int auxConvercion = auxPalindromo;

            // Invertir el número
            while (auxConvercion > 0) {
                int auxDigito = auxConvercion % 10;
                auxConvercion /= 10;
                auxInverso = (auxInverso * 10) + auxDigito;
            }

            if (auxInverso == auxPalindromo) {
                palindromo = auxPalindromo;
                multiplos[0] = i;
                multiplos[1] = j;
            }
        }
    }

    cout << "Palindromo maximo encontrado: " << palindromo << " (" << multiplos[0] << " x " << multiplos[1] << ")\n";
}

/*

    Un programa que recibe un número N impar y genere una matriz que sigue una
   espiral.Después de generada la matriz, sume las diagonales e imprima el
   resultado.

    Por ejemplo, para N = 5 se debe imprimir:

    21 22 23 24 25
    20  7  8  9 10
    19  6  1  2 11
    18  5  4  3 12
    17 16 15 14 13

    El resultado de la suma de las diagonales es: 101

*/
void problema_15() {
    cout << "Un programa que recibe un número N impar y genera una matriz que sigue una espiral.\n"
            "Después de generada la matriz, sume las diagonales e imprima el resultado.\n";

    int n{}, sum{};

    cout << "\nIngres un numero impar: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "entrada invalida, solo numero par" << endl;
        return;
    }

    int fila = n / 2, columna = n / 2, pasos = 1, numero = 1;
    int matriz[n][n];


    for (int i = 0; i <= n-1; i++) {
        for (int j = 0; j <= n-1; j++)
            matriz[i][j] = 0;
    }

    matriz[fila][columna] = numero;

    cout << "\n";

    while (true) {
        for (int de = 1; de <= pasos; de++) {
            ++numero;
            columna += 1;
            matriz[fila][columna] = numero;

            if (numero==n*n){
                columna++;
                break;
            }
        }


        sum += matriz[fila][columna-1];
        if (numero==n*n)
            break;

        for (int ab = 1; ab <= pasos; ab++) {
            ++numero;
            fila += 1;
            matriz[fila][columna] = numero;
        }

        sum += matriz[fila][columna];
        pasos++;

        for (int de = 1; de <= pasos; de++) {
            ++numero;
            columna -= 1;
            matriz[fila][columna] = numero;
        }

        sum += matriz[fila][columna];


        for (int arr = 1; arr <= pasos; arr++) {
            ++numero;
            fila -= 1;
            matriz[fila][columna] = numero;
        }

        sum += matriz[fila][columna];
        pasos++;

    }

    for (int i = 0; i <= n-1; i++) {
        for (int j = 0; j <= n-1; j++){
            if (matriz[i][j] >= 0 && matriz[i][j] <= 9)
                cout << "  ";
            else
                cout << " ";
            cout << matriz[i][j];
        }
        cout << "\n";
    }

    cout << "El resultado de la suma de las diagonales es: " << sum << endl;
}

void problema_16(){
    problema_pendiente();
}
void problema_17(){
    problema_pendiente();
}

void problema_pendiente(){
    cout << "Este problema no ha sido desarrollado" << endl;
}



