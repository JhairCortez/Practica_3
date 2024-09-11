// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 1
// Problema planteado: Obtener la suma de la serie
#include <iostream>
using namespace std;

int obtenerTermino(int n) 
{
    int termino = 4;  
    int incremento = 2;  
    for (int i = 1; i < n; i++) 
    {
        termino += incremento;
        incremento++; 
    }
    return termino;
}
int sumaSerie(int n) 
{
    int suma = 0;
    for (int i = 1; i <= n; i++) 
    {
        suma += obtenerTermino(i);
    }
    return suma;
}

int main() 
{
    int n;
    cout << "Ingrese el número de términos: ";
    cin >> n;
    int suma = sumaSerie(n);
    cout << "La suma de los primeros " << n << " términos de la serie es: " << suma << endl;
    return 0;
}