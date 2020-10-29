#include <iostream>
#include "arregloDinamico.h"

using namespace std;

int main () {
    ArregloDinamico arreglo;
    arreglo.insertar_final("Juan");
    arreglo.insertar_final("Pedro");
    arreglo.insertar_final("Lupe");
    arreglo.insertar_final("Brenda");
    arreglo.insertar_final("Carlos");
    arreglo.insertar_final("Karla");
    arreglo.insertar_final("Oscar");
    arreglo.insertar_final("Flor");
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl << endl;
    arreglo.insertar_inicio("Adrian");
    arreglo.insertar_inicio("Paola");
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }    
    return 0;
}