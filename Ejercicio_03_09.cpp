// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 9
// Problema planteado: Generar para ornden n=5
#include <iostream>
using namespace std;

void generarPatron(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if ((i + j) % 2 == 0) 
            {
                cout << "1";
            } else 
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}
int main() 
{
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    generarPatron(n);
    return 0;
}