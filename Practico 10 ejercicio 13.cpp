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

    for(int i = 0; i < n / 2; i++) {
        int temp = numeros[i];
        numeros[i] = numeros[n - 1 - i];
        numeros[n - 1 - i] = temp;
    }

    cout << "Vector revertido: ";
    for(int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
