#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;

    cout << "Ingrese el tamano del vector A (ordenado): ";
    cin >> n;
    cout << "Ingrese el tamano del vector B (ordenado): ";
    cin >> m;

    vector<int> A(n);
    vector<int> B(m);
    vector<int> C(n + m);

    cout << "\nIngrese los elementos del vector A (ORDENADOS):" << endl;
    for(int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\nIngrese los elementos del vector B (ORDENADOS):" << endl;
    for(int i = 0; i < m; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    int i = 0, j = 0, k = 0;

    while(i < n && j < m) {
        if(A[i] <= B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    while(i < n) {
        C[k] = A[i];
        i++;
        k++;
    }

    while(j < m) {
        C[k] = B[j];
        j++;
        k++;
    }

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Vector A (ordenado): ";
    for(int num : A) cout << num << " ";

    cout << "\nVector B (ordenado): ";
    for(int num : B) cout << num << " ";

    cout << "\nVector C (intercalado y ordenado): ";
    for(int num : C) cout << num << " ";
    cout << endl;

    return 0;
}
