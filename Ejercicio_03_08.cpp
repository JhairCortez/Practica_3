// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 8
// Problema planteado: Generar numeros
#include <iostream>
using namespace std;

void generarPiramide(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) 
        {
            cout << j;
        }
        cout << endl;
    }
}
int main() 
{
    int n = 9; 
    generarPiramide(n);
    return 0;
}