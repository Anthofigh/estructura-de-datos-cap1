// Ejercicio 10: media aritmetica y observaciones sobre la media
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 10;
    double datos[N];
    double suma = 0.0;

    for (int i = 0; i < N; i++) {
        cout << "Valor de la observacion " << i + 1 << ": ";
        cin >> datos[i];
        suma += datos[i];
    }

    double media = suma / N;
    int sobre_media = 0;
    for (int i = 0; i < N; i++) {
        if (datos[i] > media) sobre_media++;
    }

    cout << fixed << setprecision(2);
    cout << "\nMedia aritmetica: " << media << endl;
    cout << "Observaciones por encima de la media: " << sobre_media << endl;
    return 0;
}
