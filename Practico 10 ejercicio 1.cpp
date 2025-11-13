#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    vector<int> numeros(n);

    cout << "Ingrese " << n << " numeros:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int maximo = numeros[0];
    for(int i = 1; i < n; i++) {
        if(numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }

    cout << "\nEl valor maximo en el vector es: " << maximo << endl;

    return 0;
}
