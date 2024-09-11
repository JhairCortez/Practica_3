// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 3
// Problema planteado: Combertir un numero en base n a base 10
#include <iostream>
#include <cmath>   

using namespace std;
int convertirBaseN_A_Base10(int numero, int base) 
{
    int resultado = 0;
    int posicion = 0;

    while (numero > 0) 
    {
        int digito = numero % 10; 
        resultado += digito * pow(base, posicion);
        numero /= 10;
        posicion++;
    }
    return resultado;
}
int main() 
{
    int numero, base;
    cout << "Ingrese el número en base n: ";
    cin >> numero;
    cout << "Ingrese la base (n): ";
    cin >> base;
    int resultado = convertirBaseN_A_Base10(numero, base);
    cout << "El número " << numero << " en base " << base << " es igual a " << resultado << " en base 10." << endl;
    return 0;
}