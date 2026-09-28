// Ejercicio 12: mediciones con continue (negativos) y break (999)
#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int validos = 0;

    for (int i = 1; i <= N; i++) {
        double valor;
        cout << "Medicion " << i << ": ";
        cin >> valor;

        if (valor == 999) {
            cout << "Se ingreso 999: fin del procesamiento.\n";
            break;
        }
        if (valor < 0) {
            cout << "  Valor negativo, se omite.\n";
            continue;
        }
        validos++;
    }

    cout << "\nValores validos procesados: " << validos << endl;
    return 0;
}
