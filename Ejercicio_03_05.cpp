// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 5
// Problema planteado: Lanzamiento de una moneda
#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;
char lanzarMoneda() 
{
    int resultado = rand() % 2;
    if (resultado == 0) 
    {
        return 'C';  
    } else {
        return 'S';  
    }
}
void simularLanzamientos(int n) 
{
    int caras = 0, sellos = 0;
    for (int i = 0; i < n; i++) 
    {
        char resultado = lanzarMoneda();
        if (resultado == 'C') 
        {
            caras++;
        } else 
        {
            sellos++;
        }
    }
    double porcentajeCaras = (double)caras / n * 100;
    double porcentajeSellos = (double)sellos / n * 100;
    cout << "Porcentaje de caras: " << porcentajeCaras << "%" << endl;
    cout << "Porcentaje de sellos: " << porcentajeSellos << "%" << endl;
}
int main() 
{
    srand(time(0));
    int n;
    cout << "Ingrese el número de lanzamientos: ";
    cin >> n;
    simularLanzamientos(n);
    return 0;
}