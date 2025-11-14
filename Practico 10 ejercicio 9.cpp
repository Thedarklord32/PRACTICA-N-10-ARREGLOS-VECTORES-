#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;

    cout << "Ingrese el tamano del primer vector: ";
    cin >> n;
    cout << "Ingrese el tamano del segundo vector: ";
    cin >> m;

    vector<int> A(n);
    vector<int> B(m);
    vector<int> C(n + m);

    cout << "\nIngrese los elementos del primer vector:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\nIngrese los elementos del segundo vector:" << endl;
    for(int i = 0; i < m; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    for(int i = 0; i < n; i++) {
        C[i] = A[i];
    }

    for(int i = 0; i < m; i++) {
        C[n + i] = B[i];
    }

    cout << "\nPrimer vector A: ";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    cout << "\nSegundo vector B: ";
    for(int i = 0; i < m; i++) {
        cout << B[i] << " ";
    }

    cout << "\nVector concatenado C: ";
    for(int i = 0; i < n + m; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
