#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamano del vector: ";
    cin >> n;

    vector<int> numeros(n);

    cout << "Ingrese " << n << " numeros:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int suma = 0;
    for(int i = 0; i < n; i++) {
        suma += numeros[i];
    }

    double promedio = static_cast<double>(suma) / n;

    cout << "\nLa suma de los valores es: " << suma << endl;
    cout << "El promedio de los valores es: " << promedio << endl;

    return 0;
}
