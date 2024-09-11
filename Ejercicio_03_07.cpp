// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 7
// Problema planteado: Generar secuencias
#include <iostream>
using namespace std;

void generarSecuencias(int n) {
    for (int i = n; i >= 1; i--) 
    {  
        for (int j = 1; j <= i; j++) 
        { 
            cout << j;
        }
        cout << endl;
    }
}
int main() 
{
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    generarSecuencias(n);
    return 0;
}