#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamano del vector: ";
    cin >> n;

    if(n < 2) {
        cout << "El vector debe tener al menos 2 elementos" << endl;
        return 0;
    }

    vector<double> A(n);

    cout << "Ingrese " << n << " numeros reales:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> A[i];
    }

    cout << fixed << setprecision(2);
    cout << "\nVector: ";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    double diferenciaMaxima = 0;
    int posicionMaxima = 0;
    double diferenciaActual;

    for(int i = 0; i < n - 1; i++) {
        diferenciaActual = abs(A[i] - A[i + 1]);

        cout << "Diferencia entre A[" << i << "]=" << A[i]
             << " y A[" << i + 1 << "]=" << A[i + 1]
             << " = " << diferenciaActual << endl;

        if(diferenciaActual > diferenciaMaxima) {
            diferenciaMaxima = diferenciaActual;
            posicionMaxima = i;
        }
    }

    cout << "\nRESULTADO:" << endl;
    cout << "La diferencia mas grande es: " << diferenciaMaxima << endl;
    cout << "Se encuentra entre los elementos:" << endl;
    cout << "A[" << posicionMaxima << "] = " << A[posicionMaxima] << endl;
    cout << "A[" << posicionMaxima + 1 << "] = " << A[posicionMaxima + 1] << endl;

    return 0;
}
