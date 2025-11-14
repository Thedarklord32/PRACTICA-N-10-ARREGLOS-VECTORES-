#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;

    vector<string> alumnos(n);
    vector<double> notas(n);

    cout << "\nIngrese los datos de los alumnos:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "\nAlumno " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, alumnos[i]);
        cout << "Nota: ";
        cin >> notas[i];
    }

    cout << "\n--- DATOS ORIGINALES ---" << endl;
    for(int i = 0; i < n; i++) {
        cout << alumnos[i] << ": " << notas[i] << endl;
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(notas[j] < notas[j + 1]) {
                double tempNota = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = tempNota;

                string tempAlumno = alumnos[j];
                alumnos[j] = alumnos[j + 1];
                alumnos[j + 1] = tempAlumno;
            }
        }
    }

    cout << "\n--- TRES MEJORES NOTAS ---" << endl;
    int cantidadMostrar = min(3, n);
    for(int i = 0; i < cantidadMostrar; i++) {
        cout << i + 1 << ". " << alumnos[i] << ": " << notas[i] << endl;
    }

    return 0;
}
