#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Cuantos numeros de Fibonacci quieres generar? ";
    cin >> n;

    if(n <= 0) {
        cout << "Debe ser un numero positivo." << endl;
        return 0;
    }

    vector<long long> fibonacci;

    if(n >= 1) {
        fibonacci.push_back(0);
    }
    if(n >= 2) {
        fibonacci.push_back(1);
    }

    for(int i = 2; i < n; i++) {
        long long siguiente = fibonacci[i-1] + fibonacci[i-2];
        fibonacci.push_back(siguiente);
    }

    cout << "\nLos primeros " << n << " numeros de Fibonacci:" << endl;
    for(int i = 0; i < fibonacci.size(); i++) {
        cout << "F(" << i << ") = " << fibonacci[i] << endl;
    }

    return 0;
}
