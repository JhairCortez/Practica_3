// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 2
// Problema planteado: Lanzamiento de dado
#include <iostream>
#include <cstdlib>
#include <ctime>  

using namespace std;
int lanzarDado() 
{
    return rand() % 6 + 1; 
}
void simularLanzamientos(int n) 
{
    int frecuenciaPar = 0;
    for (int i = 0; i < n; i++) 
    {
        int resultado = lanzarDado();
        cout << "Lanzamiento " << i + 1 << ": " << resultado << endl;
        if (resultado % 2 == 0) 
        {
            frecuenciaPar++;
        }
    }
    cout << "Número de veces que salió una cara par: " << frecuenciaPar << endl;
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