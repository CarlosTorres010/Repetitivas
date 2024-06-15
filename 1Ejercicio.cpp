/*Leer números por teclado hasta introducir uno negativo*/

#include <iostream>
using namespace std;

int main() {
    int p;

    cout << "Ingrese un numero: "; cin >> p;

    while (p >= 0) {
        cout << "El numero ingresado es: " << p<< endl;
        
        cout << "Ingrese otro numero (un numero negativo para terminar): "; cin >> p;
    }

    cout << "Ha ingresado un numero negativo. Fin del programa." << endl;

    return 0;
}
