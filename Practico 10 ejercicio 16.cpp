#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<string> nombres;
    vector<double> notas;
    int opcion;

    do {
        cout << "\n=== MENU ALUMNOS ===" << endl;
        cout << "1. Ingresar alumno y nota" << endl;
        cout << "2. Listar alumnos" << endl;
        cout << "3. Ordenar alfabeticamente" << endl;
        cout << "4. Mejor nota" << endl;
        cout << "5. Promedio de notas" << endl;
        cout << "6. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: {
                string nombre;
                double nota;

                cout << "Nombre: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Nota: ";
                cin >> nota;

                nombres.push_back(nombre);
                notas.push_back(nota);
                cout << "Alumno agregado!" << endl;
                break;
            }

            case 2: {
                if(nombres.empty()) {
                    cout << "No hay alumnos registrados." << endl;
                } else {
                    cout << "\nLista de alumnos:" << endl;
                    for(int i = 0; i < nombres.size(); i++) {
                        cout << nombres[i] << " - " << notas[i] << endl;
                    }
                }
                break;
            }

            case 3: {
                if(nombres.empty()) {
                    cout << "No hay alumnos para ordenar." << endl;
                } else {
                    vector<pair<string, double>> temp;
                    for(int i = 0; i < nombres.size(); i++) {
                        temp.push_back(make_pair(nombres[i], notas[i]));
                    }

                    sort(temp.begin(), temp.end());

                    for(int i = 0; i < temp.size(); i++) {
                        nombres[i] = temp[i].first;
                        notas[i] = temp[i].second;
                    }

                    cout << "Alumnos ordenados alfabeticamente." << endl;
                }
                break;
            }

            case 4: {
                if(notas.empty()) {
                    cout << "No hay alumnos registrados." << endl;
                } else {
                    double mejor = notas[0];
                    int pos = 0;

                    for(int i = 1; i < notas.size(); i++) {
                        if(notas[i] > mejor) {
                            mejor = notas[i];
                            pos = i;
                        }
                    }

                    cout << "Mejor nota: " << nombres[pos] << " - " << mejor << endl;
                }
                break;
            }

            case 5: {
                if(notas.empty()) {
                    cout << "No hay alumnos registrados." << endl;
                } else {
                    double suma = 0;
                    for(int i = 0; i < notas.size(); i++) {
                        suma += notas[i];
                    }
                    double promedio = suma / notas.size();
                    cout << "Promedio de notas: " << promedio << endl;
                }
                break;
            }

            case 6: {
                cout << "Saliendo..." << endl;
                break;
            }

            default: {
                cout << "Opcion invalida!" << endl;
            }
        }

    } while(opcion != 6);

    return 0;
}
