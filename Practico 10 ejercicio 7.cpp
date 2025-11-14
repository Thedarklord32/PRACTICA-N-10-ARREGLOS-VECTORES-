#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entre 0 y 20: ";
    cin >> numero;

    string literal;

    switch(numero) {
        case 0: literal = "CERO"; break;
        case 1: literal = "UNO"; break;
        case 2: literal = "DOS"; break;
        case 3: literal = "TRES"; break;
        case 4: literal = "CUATRO"; break;
        case 5: literal = "CINCO"; break;
        case 6: literal = "SEIS"; break;
        case 7: literal = "SIETE"; break;
        case 8: literal = "OCHO"; break;
        case 9: literal = "NUEVE"; break;
        case 10: literal = "DIEZ"; break;
        case 11: literal = "ONCE"; break;
        case 12: literal = "DOCE"; break;
        case 13: literal = "TRECE"; break;
        case 14: literal = "CATORCE"; break;
        case 15: literal = "QUINCE"; break;
        case 16: literal = "DIECISEIS"; break;
        case 17: literal = "DIECISIETE"; break;
        case 18: literal = "DIECIOCHO"; break;
        case 19: literal = "DIECINUEVE"; break;
        case 20: literal = "VEINTE"; break;
        default: literal = "Numero fuera de rango";
    }

    cout << numero << " = " << literal << endl;

    return 0;
}
