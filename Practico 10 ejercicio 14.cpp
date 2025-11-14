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

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    cout << "Vector ordenado: ";
    for(int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
