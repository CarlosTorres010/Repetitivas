/*Leer números por teclado hasta introducir uno negativo*/

#include <iostream>
using namespace std;

int main() {
    int p;

    cout << "Ingrese su numero: "; cin >> p;

    while (p >= 0) {
        cout << "El numero que escogido es: " << p<< endl;
        
        cout << "Ingrese otro numero (un numero negativo para que finalize el programa): "; cin >> p;
    }

    cout << "Ha ingresado un numero negativo. Se ha finalizado el programa." << endl;

    return 0;
}
