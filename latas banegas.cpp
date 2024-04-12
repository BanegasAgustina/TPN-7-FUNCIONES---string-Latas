#include <iostream>
#include <string>
using namespace std;

int CantidadLatas(string data);
int SecuenciaMasLarga(string data);
int SegundaSecuenciaMasLarga(string data, int max1);
int Distancia(string data , int max1 , int max2);

int main() {
    string dato;
    cout << "Ingrese latas: ";
    getline(cin, dato);
    int max1 = CantidadLatas(dato);
    int max2 = SegundaSecuenciaMasLarga(dato, max1) ;
    cout <<max1<< endl;
    cout <<SecuenciaMasLarga(dato)<< endl;
    cout  << SegundaSecuenciaMasLarga(dato, max1) << endl;
    cout<<Distancia(dato , max1 , max2);

    return 0;
}

int CantidadLatas(string data) {
    int cant = 0;

    for (int i = 0; i < data.size(); i++) {
        if (data[i] == 'A' || data[i] == 'G' || data[i] == 'C' || data[i] == 'T') {
            cant += 1;
        }
    }

    return cant;
}

int SecuenciaMasLarga(string data) {
    int max1 = 0;
    int c= 0;

    for (int i = 0; i < data.size(); i++) {
        if (data[i] == 'G') {
            c++;
            if (c> max1) {
                max1 = c;
            }
        } else {
            c = 0;
        }
    }

    return max1;
}

int SegundaSecuenciaMasLarga(string data, int max1) {
    int max2 = 0;
    int c = 0;

    for (int i = 0; i < data.size(); i++) {
        if (data[i] == 'G') {
            c++;
            if ( max2= c < max1) {
                max2 = c;
            }
        } else {
            c = 0;
        }
    }

    return max2;
}

int Distancia(string data, int max1, int max2) {
    int distancia = 0;
    int d = 0;

    for (int i = 0; i < data.size(); i++) {
        if (data[i] == 'G') {
            d++;
            if (d== max1 || d == max2) {
                distancia = d;
                
            }
        }
    }

    return distancia;
}
