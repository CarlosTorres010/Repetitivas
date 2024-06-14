#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: "; cin >> numero;

    while (numero >= 0) {
        cout << "El numero ingresado es: " << numero << endl;
        
        cout << "Ingrese otro numero (un numero negativo para terminar): "; cin >> numero;
    }

    cout << "Ha ingresado un numero negativo. Fin del programa." << endl;

    return 0;
}
