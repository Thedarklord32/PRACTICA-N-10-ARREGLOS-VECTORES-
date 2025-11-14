#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamano del vector: ";
    cin >> n;

    vector<int> original(n);

    cout << "Ingrese " << n << " numeros:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> original[i];
    }

    vector<int> reverso(n);

    for(int i = 0; i < n; i++) {
        reverso[i] = original[n - 1 - i];
    }

    cout << "\nVector original: ";
    for(int i = 0; i < n; i++) {
        cout << original[i] << " ";
    }

    cout << "\nVector reverso: ";
    for(int i = 0; i < n; i++) {
        cout << reverso[i] << " ";
    }
    cout << endl;

    return 0;
}
