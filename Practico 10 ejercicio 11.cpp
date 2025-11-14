#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamano del vector: ";
    cin >> n;

    vector<int> numeros(n);

    cout << "Ingrese " << n << " numeros (positivos, negativos o cero):" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    for(int i = 0; i < n; i++) {
        if(numeros[i] > 0) {
            positivos++;
        } else if(numeros[i] < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    cout << "\nVector: ";
    for(int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Numeros positivos: " << positivos << endl;
    cout << "Numeros negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl;
    cout << "Total de elementos: " << n << endl;

    return 0;
}
