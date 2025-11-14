#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamano del vector: ";
    cin >> n;

    if(n < 3) {
        cout << "El vector debe tener al menos 3 elementos" << endl;
        return 0;
    }

    vector<int> numeros(n);

    cout << "Ingrese " << n << " numeros:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "\nVector original: ";
    for(int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "\nPromedios de cada 3 valores consecutivos:" << endl;
    for(int i = 0; i <= n - 3; i++) {
        int suma = numeros[i] + numeros[i + 1] + numeros[i + 2];
        double promedio = static_cast<double>(suma) / 3;

        cout << "P" << i + 1 << " = (" << numeros[i] << " + " << numeros[i + 1]
             << " + " << numeros[i + 2] << ") / 3 = " << promedio << endl;
    }

    return 0;
}
