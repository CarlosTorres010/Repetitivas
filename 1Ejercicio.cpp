/*Leer números por teclado hasta introducir uno negativo*/

#include <iostream>
using namespace std;

int main() {
    int X;

    cout << "Ingrese su numero: "; cin >>X;

    while (X >= 0) {
        cout << "El numero que escogido es: " << X<< endl;
        
        cout << "Ingrese otro numero (un numero negativo para que finalize el programa): "; cin >> X;
    }

    cout << "Ha ingresado un numero negativo. Se ha finalizado el programa." << endl;

    return 0;
}
