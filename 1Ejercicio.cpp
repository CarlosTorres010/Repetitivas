#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un numero: "; cin >> n;

    while (n >= 0) {
        cout << "El numero ingresado es: " << n<< endl;
        
        cout << "Ingrese otro numero (un numero negativo para terminar): "; cin >> n;
    }

    cout << "Ha ingresado un numero negativo. Fin del programa." << endl;

    return 0;
}
