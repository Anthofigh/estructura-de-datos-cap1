// Ejercicio 11: validacion de clave con ciclo while
#include <iostream>
using namespace std;

int main() {
    const int CLAVE = 4321;   // clave correcta (supuesto)
    int ingreso = 0;
    int intentos = 0;

    while (ingreso != CLAVE) {
        cout << "Ingrese la clave numerica: ";
        cin >> ingreso;
        intentos++;
        if (ingreso != CLAVE)
            cout << "Clave incorrecta. Intente nuevamente.\n";
    }

    cout << "\nAcceso concedido.\n";
    cout << "Intentos realizados: " << intentos << endl;
    return 0;
}
