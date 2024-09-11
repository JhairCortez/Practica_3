// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 4
// Problema planteado: Obtener la suma de la serie
#include <iostream>
using namespace std;

int sumaSerie(int n) 
{
    int suma = 0;
    for (int i = 1; i <= n; i++) 
    {
        int termino = i * i; 
        if (i % 2 == 0) 
        {
            suma -= termino; 
        } else 
        {
            suma += termino;  
        }
    }
    return suma;
}
int main() 
{
    int n;
    cout << "Ingrese el número de términos: ";
    cin >> n;
    int resultado = sumaSerie(n);
    cout << "La suma de los primeros " << n << " términos de la serie es: " << resultado << endl;
    return 0;
}