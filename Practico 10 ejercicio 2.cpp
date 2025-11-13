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

    int minimo = numeros[0];

    for(int i = 1; i < n; i++) {
        if(numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    cout << "\nEl valor minimo en el vector es: " << minimo << endl;

    return 0;
}
