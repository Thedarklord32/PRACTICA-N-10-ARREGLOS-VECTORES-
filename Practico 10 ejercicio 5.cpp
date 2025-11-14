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

    bool esCapicua = true;

    for(int i = 0; i < n / 2; i++) {
        if(numeros[i] != numeros[n - 1 - i]) {
            esCapicua = false;
            break;
        }
    }

    cout << "\nVector: ";
    for(int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }

    if(esCapicua) {
        cout << "\nEl vector ES capicua" << endl;
    } else {
        cout << "\nEl vector NO es capicua" << endl;
    }

    return 0;
}
