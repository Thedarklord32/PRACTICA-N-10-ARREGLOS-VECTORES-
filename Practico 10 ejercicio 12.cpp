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

    cout << "\nVector original: ";
    for(int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> sinDuplicados;

    for(int i = 0; i < n; i++) {
        bool esDuplicado = false;

        for(int j = 0; j < sinDuplicados.size(); j++) {
            if(numeros[i] == sinDuplicados[j]) {
                esDuplicado = true;
                break;
            }
        }

        if(!esDuplicado) {
            sinDuplicados.push_back(numeros[i]);
        }
    }

    cout << "Vector sin duplicados: ";
    for(int num : sinDuplicados) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Se eliminaron " << (n - sinDuplicados.size()) << " elementos duplicados" << endl;

    return 0;
}
