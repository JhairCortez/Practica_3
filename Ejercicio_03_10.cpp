// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 10
// Problema planteado: Guarderia de niños
#include <iostream>
#include <cstdlib>  
#include <ctime>   

using namespace std;
int main() 
{
    srand(time(0));  
    int N;
    cout << "Ingrese el número total de niños (N): ";
    cin >> N;
    int niños1 = rand() % (N + 1);  
    int niños2 = rand() % (N - niños1 + 1);  
    int niños3 = N - niños1 - niños2;
    if (niños3 < 0) 
    {
        cout << "No se pudo generar una distribución válida de niños." << endl;
        return 1;
    }
    int pañales1 = niños1 * 6; 
    int pañales2 = niños2 * 3; 
    int pañales3 = niños3 * 2;
    int totalPañales = pañales1 + pañales2 + pañales3;
    cout << "Número de niños de 1 año: " << niños1 << endl;
    cout << "Número de niños de 2 años: " << niños2 << endl;
    cout << "Número de niños de 3 años: " << niños3 << endl;
    cout << "Consumo total de pañales por día: " << totalPañales << endl;
    return 0;
}